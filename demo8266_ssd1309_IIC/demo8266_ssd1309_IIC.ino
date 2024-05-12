/*
 * @Author: xuyang
 * @Date: 2024-05-11 15:58:02
 * @LastEditors: xuyang
 * @LastEditTime: 2024-05-12 11:36:13
 * @FilePath: \good_learning_code_rebuild_C_plus_plus\demo8266_ssd1309_IIC\demo8266_ssd1309_IIC.ino
 * @Description: 
 * 
 * Copyright (c) 2024 by xuyang, All Rights Reserved 
 */
#include <U8g2lib.h>

// 初始化U8g2库，选择对应的屏幕型号和通信方式
// 这里使用的是128x64分辨率的OLED屏幕，使用硬件I2C
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/U8X8_PIN_NONE);

void setup()
{
    // 初始化屏幕
    u8g2.begin();
}

void loop()
{
    // 准备缓冲区的内容
    u8g2.clearBuffer();                   // 清除内部的显示缓冲区
    u8g2.setFont(u8g2_font_ncenB08_tr);   // 选择字体
    u8g2.drawStr(0, 20, "Hello, World!"); // 在(0,20)位置绘制字符串
    // 将缓冲区的内容显示到屏幕上
    u8g2.sendBuffer();
    // 延迟一段时间再更新屏幕内容
    delay(1000);
}
