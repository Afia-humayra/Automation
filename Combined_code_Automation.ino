#include<Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo window1;
int rain_sense1 = 11;
#define window1_close 100
#define window1_open 20
#define gas_sense1 A1
#define gas1_lvl1 110
#define gas1_lvl2 140
#define gas1_lvl3 180
#define led1 13
#define led2 12
#define buzzer 10
#define fan 9
int p = window1_open;
int gas_value, rain1_value;
int temp_rain = 2, temp_gas = 4;

void setup() {
  lcd.init(); lcd.backlight();
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(rain_sense1, INPUT);
  window1.attach(3);
  window1.write(p);
}

void loop() {
  gas();
  rain1();
  show();
}
