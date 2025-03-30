# 配置工程

在 [main/Kconfig.projbuild](main/Kconfig.projbuild) 中配置：

3. **QWEATHER_REQUEST_KEY**
   - [和风天气的 request key](https://dev.qweather.com/), 用于在桌面钟界面显示天气和温度信息

4. **EXAMPLE_WIFI_SSID**
   - 连接 Wi-Fi 的 SSID

5. **EXAMPLE_WIFI_PASSWORD**
   - 连接 Wi-Fi 的密码

可以通过 ``idf.py menuconfig`` 手动配置上方参数，也可以直接在 Kconfig.projbuild 中修改 default 值

注意：如果 sdkconfig 文件已经生成，则 Kconfig.projbuild 不再生效。可以删除 sdkconfig 或运行 ``idf.py menuconfig`` 指令修改。

# 编译和烧录

完成上方的配置后，运行下方指令进行编译和烧录
```
idf.py flash monitor
```