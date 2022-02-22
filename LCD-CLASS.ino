#include <LiquidCrystal.h>
LiquidCrystal lcd(10,3,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);

lcd.setCursor(0,0);
lcd.print("WELCOME TO");
lcd.setCursor(0,1);
lcd.print("ODUDUWA UNI");


}

void loop() {
  // put your main code here, to run repeatedly:

}
