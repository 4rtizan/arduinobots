
#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  pinMode(12, OUTPUT);
  
}

void loop() {
  int sec;
  int minut;
  int hour;
  int sec_and_min = 60;
  int limit_hours_day = 18;
  int limit_hours_night = 6;
   
    
  for ( hour=1; hour < limit_hours_day +1; hour++) {
            
       lcd.setCursor(7, 1);
       lcd.print("  ");
       
        lcd.setCursor(0, 0);
        lcd.print("    ");
        lcd.print("day");
        digitalWrite(12, HIGH);
        for ( minut=1; minut< sec_and_min; minut++) {
            
            lcd.setCursor(13, 1);
            lcd.print("  ");
            
            for (sec=1; sec < sec_and_min ; sec++) {
               
                delay(1000);
                lcd.setCursor(13, 1);
                lcd.print(sec);
                
                
            }
            
            delay(1000);
            lcd.setCursor(7, 1);
            lcd.print(minut);    
      }      
            
       delay(1000);
       lcd.setCursor(0, 1);
       lcd.print(hour);    
   }

   
  lcd.setCursor(0, 1);
  lcd.print("   ");
   
  for ( hour=1; hour < limit_hours_night +1; hour++) {
            
       lcd.setCursor(7, 1);
       lcd.print("  ");
       
                lcd.setCursor(0, 0);
                lcd.print("night");
                lcd.print("    ");
                digitalWrite(12, LOW);
       
        for ( minut=1; minut< sec_and_min; minut++) {
            
            lcd.setCursor(13, 1);
            lcd.print("  ");
            
            for (sec=1; sec < sec_and_min ; sec++) {
               
                delay(1000);
                lcd.setCursor(13, 1);
                lcd.print(sec);
                
                
            }
            
            delay(1000);
            lcd.setCursor(7, 1);
            lcd.print(minut);    
      }      
            
       delay(1000);
       lcd.setCursor(0, 1);
       lcd.print(hour);    
   }
   
   
  lcd.setCursor(0, 1);
  lcd.print("   "); 
      
      
}
