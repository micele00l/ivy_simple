#include "../ui.h"

lv_obj_t *ui_wifi_config;
lv_obj_t *ui_wifi_config_panel;
lv_obj_t *ui_wifi_config_title;
lv_obj_t *ui_wifi_config_ssid;
lv_obj_t *ui_wifi_config_info;

void ui_event_wifi_config(lv_event_t *e);

void ui_wifi_config_screen_init(void)
{
    ui_wifi_config = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_wifi_config, LV_OBJ_FLAG_SCROLLABLE);
    
    ui_wifi_config_panel = lv_obj_create(ui_wifi_config);
    lv_obj_set_width(ui_wifi_config_panel, 240);
    lv_obj_set_height(ui_wifi_config_panel, 240);
    lv_obj_set_align(ui_wifi_config_panel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_wifi_config_panel, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_radius(ui_wifi_config_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_wifi_config_panel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_wifi_config_panel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_wifi_config_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_wifi_config_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_wifi_config_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_wifi_config_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_wifi_config_panel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // 创建标题
    ui_wifi_config_title = lv_label_create(ui_wifi_config_panel);
    lv_obj_set_width(ui_wifi_config_title, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_wifi_config_title, LV_SIZE_CONTENT);
    lv_obj_set_align(ui_wifi_config_title, LV_ALIGN_TOP_MID);
    lv_obj_set_y(ui_wifi_config_title, 20);
    lv_label_set_text(ui_wifi_config_title, "Wi-Fi配网模式");
    lv_obj_set_style_text_font(ui_wifi_config_title, &ui_font_OPPOSansH25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_wifi_config_title, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    // 创建热点SSID信息
    ui_wifi_config_ssid = lv_label_create(ui_wifi_config_panel);
    lv_obj_set_width(ui_wifi_config_ssid, 200);
    lv_obj_set_height(ui_wifi_config_ssid, LV_SIZE_CONTENT);
    lv_obj_set_align(ui_wifi_config_ssid, LV_ALIGN_TOP_MID);
    lv_obj_set_y(ui_wifi_config_ssid, 70);
    lv_label_set_text(ui_wifi_config_ssid, "热点名称: ESP-Config");
    lv_obj_set_style_text_font(ui_wifi_config_ssid, &ui_font_OPPOSansH18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_wifi_config_ssid, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    
    // 创建说明文本
    ui_wifi_config_info = lv_label_create(ui_wifi_config_panel);
    lv_obj_set_width(ui_wifi_config_info, 220);
    lv_obj_set_height(ui_wifi_config_info, LV_SIZE_CONTENT);
    lv_obj_set_align(ui_wifi_config_info, LV_ALIGN_CENTER);
    lv_obj_set_y(ui_wifi_config_info, 30);
    lv_label_set_text(ui_wifi_config_info, "请用手机连接以上Wi-Fi热点\n连接后将自动打开配网页面\n输入您家的Wi-Fi名称和密码");
    lv_obj_set_style_text_font(ui_wifi_config_info, &ui_font_OPPOSansH18, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_wifi_config_info, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_long_mode(ui_wifi_config_info, LV_LABEL_LONG_WRAP);
    lv_obj_set_style_text_align(ui_wifi_config_info, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    // 添加事件回调
    lv_obj_add_event_cb(ui_wifi_config, ui_event_wifi_config, LV_EVENT_ALL, NULL);
}

void ui_event_wifi_config(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    
    if (event_code == LV_EVENT_SCREEN_LOAD_START) {
        lv_obj_set_parent(title_panel, ui_wifi_config);
    }
    
    if (event_code == LV_EVENT_LONG_PRESSED) {
        _ui_screen_change(&ui_home, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_home_screen_init);
    }
}