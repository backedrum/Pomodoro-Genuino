/*
 * Pomodoro-Genuino timer
 * 
 * This version is for model with LED traffic-lights and 16x2 LCD screen.
 * 
 * @author Andrii Zablodskyi (andrey.zablodskiy@gmail.com)
 */
#include <LiquidCrystal.h>

const int RED = 5;
const int YELLOW = 4;
const int GREEN = 3;
const int RESET = 2;

const unsigned long TASK_LENGTH = 1500000; // Task length is 25 minutes
const unsigned long BREAK_LENGTH = 300000; // Assuming short break for 5 minutes

enum Mode {TASK, BREAK, IDLE_MODE};
int currentMode = IDLE_MODE;

unsigned long startMillis = 0;

LiquidCrystal lcd(13, 12, 9, 8, 7, 6);

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RESET, INPUT);

  // init timer with IDLE mode
  digitalWrite(GREEN, HIGH);
  lcd.begin(16, 2);
  lcd.print("Press a switch!");
}

void loop() {
  // keep current mode
  if (digitalRead(RESET) == LOW) {
    unsigned long currentMillis = millis();
    if (currentMode == TASK && currentMillis - startMillis > TASK_LENGTH) {
       digitalWrite(RED, HIGH); 
       delay(250); // blink with higher frequency as rest is needed :)
       lcd.clear();
       lcd.begin(16, 2);
       lcd.print("Have a break!");
       digitalWrite(RED, LOW);
       delay(250);
       lcd.clear();
    } else if (currentMode == BREAK && currentMillis - startMillis > BREAK_LENGTH) {
       digitalWrite(YELLOW, HIGH);
       delay(1000);
       lcd.clear();
       lcd.begin(16, 2);
       lcd.print("Break is over!");
       digitalWrite(YELLOW, LOW);
       delay(1000);
       lcd.clear();
    }
  } else {
    switchToNextMode();
  }
}

void switchToNextMode() {
  lcd.clear();
  lcd.begin(16, 2);

  switch(currentMode) {
    case IDLE_MODE:
         currentMode = TASK;
         startMillis = millis();
         digitalWrite(RED, HIGH);
         digitalWrite(YELLOW, LOW);
         digitalWrite(GREEN, LOW);
         lcd.print("Performing task");
         break;
    case TASK:
         currentMode = BREAK;
         startMillis = millis();
         digitalWrite(RED, LOW);
         digitalWrite(YELLOW, HIGH);
         digitalWrite(GREEN, LOW);
         lcd.print("Break time :)");
         break;
    case BREAK:
         currentMode = IDLE_MODE;
         digitalWrite(RED, LOW);
         digitalWrite(YELLOW, LOW);
         digitalWrite(GREEN, HIGH);
         lcd.print("Press a switch!");
  }
}
