#pragma once
#include <esp_err.h>
#include "esp_wifi.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief 启动Wi-Fi配网功能
 * 
 * 创建AP热点，并启动HTTP服务器用于配网
 * 
 * @return esp_err_t 
 */
esp_err_t app_wifi_config_start(void);

/**
 * @brief 停止Wi-Fi配网功能
 * 
 * 停止HTTP服务器，关闭AP热点
 * 
 * @return esp_err_t 
 */
esp_err_t app_wifi_config_stop(void);

/**
 * @brief 保存Wi-Fi配置信息
 * 
 * 保存SSID和密码到NVS
 * 
 * @param ssid Wi-Fi SSID
 * @param password Wi-Fi 密码 
 * @return esp_err_t 
 */
esp_err_t app_wifi_config_save(const char *ssid, const char *password);

#ifdef __cplusplus
}
#endif