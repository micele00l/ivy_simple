#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "esp_http_server.h"
#include "esp_netif.h"
#include "nvs_flash.h"
#include "lwip/err.h"
#include "lwip/sys.h"
#include "app_wifi_config.h"
#include "app_wifi.h"
#include "ui.h"

#define AP_SSID "ESP-Config"
#define AP_PASS ""  // 空密码，开放网络
#define MAX_STA_CONN 4

static const char *TAG = "wifi_config";
static httpd_handle_t server = NULL;
static bool wifi_config_running = false;

// AP模式事件处理
static void wifi_event_handler(void* arg, esp_event_base_t event_base,
                               int32_t event_id, void* event_data)
{
    if (event_id == WIFI_EVENT_AP_STACONNECTED) {
        wifi_event_ap_staconnected_t* event = (wifi_event_ap_staconnected_t*) event_data;
        ESP_LOGI(TAG, "站点 "MACSTR" 已连接, AID=%d",
                 MAC2STR(event->mac), event->aid);
    } else if (event_id == WIFI_EVENT_AP_STADISCONNECTED) {
        wifi_event_ap_stadisconnected_t* event = (wifi_event_ap_stadisconnected_t*) event_data;
        ESP_LOGI(TAG, "站点 "MACSTR" 已断开, AID=%d",
                 MAC2STR(event->mac), event->aid);
    }
}

// HTML配网页面
static const char *html_page = "<!DOCTYPE html>"
"<html>"
"<head>"
"    <title>ESP32配网页面</title>"
"    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">"
"    <style>"
"        body {"
"            font-family: Arial, sans-serif;"
"            margin: 0;"
"            padding: 20px;"
"            text-align: center;"
"            background-color: #f8f9fa;"
"        }"
"        .container {"
"            max-width: 400px;"
"            margin: 0 auto;"
"            background-color: white;"
"            padding: 20px;"
"            border-radius: 10px;"
"            box-shadow: 0 2px 10px rgba(0, 0, 0, 0.1);"
"        }"
"        h1 {"
"            color: #0066cc;"
"            font-size: 24px;"
"        }"
"        .form-group {"
"            margin-bottom: 15px;"
"            text-align: left;"
"        }"
"        label {"
"            display: block;"
"            margin-bottom: 5px;"
"            font-weight: bold;"
"        }"
"        input[type=\"text\"], input[type=\"password\"] {"
"            width: 100%;"
"            padding: 10px;"
"            border: 1px solid #ddd;"
"            border-radius: 4px;"
"            box-sizing: border-box;"
"        }"
"        button {"
"            background-color: #0066cc;"
"            color: white;"
"            border: none;"
"            padding: 10px 20px;"
"            border-radius: 4px;"
"            cursor: pointer;"
"            font-size: 16px;"
"            width: 100%;"
"        }"
"        button:hover {"
"            background-color: #0056b3;"
"        }"
"    </style>"
"</head>"
"<body>"
"    <div class=\"container\">"
"        <h1>ESP32 Wi-Fi配网</h1>"
"        <form id=\"wifi-form\">"
"            <div class=\"form-group\">"
"                <label for=\"ssid\">Wi-Fi名称:</label>"
"                <input type=\"text\" id=\"ssid\" name=\"ssid\" placeholder=\"请输入您家的Wi-Fi名称\" required>"
"            </div>"
"            <div class=\"form-group\">"
"                <label for=\"password\">Wi-Fi密码:</label>"
"                <input type=\"password\" id=\"password\" name=\"password\" placeholder=\"请输入密码\">"
"            </div>"
"            <button type=\"submit\">连接</button>"
"        </form>"
"        <div id=\"result\" style=\"margin-top: 20px;\"></div>"
"    </div>"
"    <script>"
"        document.getElementById('wifi-form').addEventListener('submit', function(e) {"
"            e.preventDefault();"
"            var ssid = document.getElementById('ssid').value;"
"            var password = document.getElementById('password').value;"
"            document.getElementById('result').innerHTML = '正在配置，请稍候...';"
"            fetch('/connect', {"
"                method: 'POST',"
"                headers: {"
"                    'Content-Type': 'application/x-www-form-urlencoded',"
"                },"
"                body: 'ssid=' + encodeURIComponent(ssid) + '&password=' + encodeURIComponent(password)"
"            })"
"            .then(response => response.text())"
"            .then(data => {"
"                document.getElementById('result').innerHTML = data;"
"            })"
"            .catch(error => {"
"                document.getElementById('result').innerHTML = '配置失败: ' + error;"
"            });"
"        });"
"    </script>"
"</body>"
"</html>";

// 处理根路径请求 - 返回配网页面
static esp_err_t root_handler(httpd_req_t *req)
{
    httpd_resp_set_type(req, "text/html");
    httpd_resp_send(req, html_page, strlen(html_page));
    return ESP_OK;
}

// 处理连接请求 - 接收Wi-Fi凭证
static esp_err_t connect_handler(httpd_req_t *req)
{
    char buf[200];
    char ssid[33] = {0};
    char password[65] = {0};
    char resp[100];
    int ret;
    
    if (req->content_len > sizeof(buf) - 1) {
        httpd_resp_send_err(req, HTTPD_400_BAD_REQUEST, "内容太长");
        return ESP_FAIL;
    }
    
    ret = httpd_req_recv(req, buf, req->content_len);
    if (ret <= 0) {
        httpd_resp_send_err(req, HTTPD_500_INTERNAL_SERVER_ERROR, "接收数据失败");
        return ESP_FAIL;
    }
    buf[ret] = '\0';
    
    // 解析表单数据 - 这里使用简单解析，实际项目中可能需要更复杂的解析
    char *ssid_start = strstr(buf, "ssid=");
    char *pass_start = strstr(buf, "password=");
    
    if (ssid_start && pass_start) {
        ssid_start += 5; // 跳过 "ssid="
        char *ssid_end = strchr(ssid_start, '&');
        if (ssid_end) {
            strncpy(ssid, ssid_start, ssid_end - ssid_start);
            ssid[ssid_end - ssid_start] = '\0';
        }
        
        pass_start += 9; // 跳过 "password="
        strncpy(password, pass_start, sizeof(password) - 1);
        
        // URL解码
        for (int i = 0; i < strlen(ssid); i++) {
            if (ssid[i] == '+') {
                ssid[i] = ' ';
            } else if (ssid[i] == '%' && i + 2 < strlen(ssid)) {
                char hex[3] = {ssid[i+1], ssid[i+2], 0};
                ssid[i] = (char)strtol(hex, NULL, 16);
                memmove(ssid + i + 1, ssid + i + 3, strlen(ssid) - i - 2);
            }
        }
        
        for (int i = 0; i < strlen(password); i++) {
            if (password[i] == '+') {
                password[i] = ' ';
            } else if (password[i] == '%' && i + 2 < strlen(password)) {
                char hex[3] = {password[i+1], password[i+2], 0};
                password[i] = (char)strtol(hex, NULL, 16);
                memmove(password + i + 1, password + i + 3, strlen(password) - i - 2);
            }
        }
        
        ESP_LOGI(TAG, "收到Wi-Fi凭证 - SSID: %s, 密码长度: %d", ssid, strlen(password));
        
        // 保存凭证
        esp_err_t err = app_wifi_config_save(ssid, password);
        if (err == ESP_OK) {
            snprintf(resp, sizeof(resp), "配置成功！设备将连接到 %s，请关闭此页面并连接到您的家庭Wi-Fi", ssid);
            httpd_resp_send(req, resp, strlen(resp));
            
            // 延迟几秒后关闭配网模式，切换到STA模式
            vTaskDelay(3000 / portTICK_PERIOD_MS);
            app_wifi_config_stop();
            
            // 重启设备应用新配置
            esp_restart();
            return ESP_OK;
        } else {
            snprintf(resp, sizeof(resp), "保存配置失败，错误代码: %d", err);
        }
    } else {
        snprintf(resp, sizeof(resp), "请求格式错误");
    }
    
    httpd_resp_send(req, resp, strlen(resp));
    return ESP_OK;
}

// 配置HTTP服务器
static httpd_handle_t start_webserver(void)
{
    httpd_config_t config = HTTPD_DEFAULT_CONFIG();
    httpd_handle_t server = NULL;
    
    // 设置URI处理函数
    httpd_uri_t root = {
        .uri       = "/",
        .method    = HTTP_GET,
        .handler   = root_handler,
        .user_ctx  = NULL
    };
    
    httpd_uri_t connect = {
        .uri       = "/connect",
        .method    = HTTP_POST,
        .handler   = connect_handler,
        .user_ctx  = NULL
    };
    
    ESP_LOGI(TAG, "启动HTTP服务器");
    if (httpd_start(&server, &config) == ESP_OK) {
        httpd_register_uri_handler(server, &root);
        httpd_register_uri_handler(server, &connect);
        return server;
    }
    
    ESP_LOGI(TAG, "启动服务器失败");
    return NULL;
}

// 启动Wi-Fi配网功能
esp_err_t app_wifi_config_start(void)
{
    if (wifi_config_running) {
        ESP_LOGI(TAG, "配网功能已在运行中");
        return ESP_OK;
    }
    
    ESP_LOGI(TAG, "启动Wi-Fi配网功能");
    
    // 加载配网UI界面
    lv_disp_load_scr(ui_wifi_config);
    
    // 初始化AP模式网络接口
    esp_netif_t *ap_netif = esp_netif_create_default_wifi_ap();
    
    // 配置AP模式
    wifi_config_t wifi_config = {
        .ap = {
            .ssid = AP_SSID,
            .ssid_len = strlen(AP_SSID),
            .password = AP_PASS,
            .max_connection = MAX_STA_CONN,
            .authmode = WIFI_AUTH_OPEN
        },
    };
    
    // 初始化Wi-Fi
    esp_wifi_stop();
    ESP_ERROR_CHECK(esp_wifi_set_mode(WIFI_MODE_AP));
    ESP_ERROR_CHECK(esp_wifi_set_config(WIFI_IF_AP, &wifi_config));
    ESP_ERROR_CHECK(esp_wifi_start());
    
    // 注册事件处理函数
    ESP_ERROR_CHECK(esp_event_handler_register(WIFI_EVENT, ESP_EVENT_ANY_ID, &wifi_event_handler, NULL));
    
    // 启动HTTP服务器
    server = start_webserver();
    if (server == NULL) {
        return ESP_FAIL;
    }
    
    wifi_config_running = true;
    return ESP_OK;
}

// 停止Wi-Fi配网功能
esp_err_t app_wifi_config_stop(void)
{
    if (!wifi_config_running) {
        return ESP_OK;
    }
    
    ESP_LOGI(TAG, "停止Wi-Fi配网功能");
    
    // 停止HTTP服务器
    if (server) {
        httpd_stop(server);
        server = NULL;
    }
    
    // 取消注册事件处理函数
    esp_event_handler_unregister(WIFI_EVENT, ESP_EVENT_ANY_ID, &wifi_event_handler);
    
    // 停止Wi-Fi
    esp_wifi_stop();
    
    wifi_config_running = false;
    return ESP_OK;
}

// 保存Wi-Fi配置
esp_err_t app_wifi_config_save(const char *ssid, const char *password)
{
    if (!ssid || strlen(ssid) == 0) {
        return ESP_ERR_INVALID_ARG;
    }
    
    nvs_handle_t nvs_handle;
    esp_err_t err;
    
    err = nvs_open("storage", NVS_READWRITE, &nvs_handle);
    if (err != ESP_OK) {
        return err;
    }
    
    // 保存SSID
    err = nvs_set_str(nvs_handle, "wifi_ssid", ssid);
    if (err != ESP_OK) {
        nvs_close(nvs_handle);
        return err;
    }
    
    // 保存密码
    err = nvs_set_str(nvs_handle, "wifi_pass", password);
    if (err != ESP_OK) {
        nvs_close(nvs_handle);
        return err;
    }
    
    // 保存SSID长度
    err = nvs_set_u8(nvs_handle, "ssid_len", strlen(ssid));
    if (err != ESP_OK) {
        nvs_close(nvs_handle);
        return err;
    }
    
    // 保存密码长度
    err = nvs_set_u8(nvs_handle, "pass_len", strlen(password));
    if (err != ESP_OK) {
        nvs_close(nvs_handle);
        return err;
    }
    
    // 提交更改
    err = nvs_commit(nvs_handle);
    nvs_close(nvs_handle);
    return err;
}