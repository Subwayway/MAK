#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels
#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void oled_init()
{
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void oled_text(int x, String text)
{
  display.clearDisplay();

  display.setTextSize(x); // Draw 2X-scale text
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  display.println(text);
  display.display();      // Show initial text
  delay(100);
}

void oled_scroll()
{
  display.startscrollright(0x00, 0x0F);
}


//scroll example
//while(1){
//    oled_scroll();
//    delay(5000);
//  }
