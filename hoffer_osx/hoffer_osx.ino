#include "DigiKeyboard.h"
void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

void p(char *line) {
  DigiKeyboard.print(line);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  p("terminal");
  p("curl -o hoff.jpg https://github.com/rmilne/hoffer/raw/master/img/h0.jpg");
  DigiKeyboard.delay(500);
  p("sqlite3 /$HOME/Library/Application\\ Support/Dock/desktoppicture.db \"update data set value = '/Users/$USER/hoff.jpg'\" && killall Dock");
  p("exit");  
  for(;;){ 
    digitalWrite(1, HIGH);
    delay(200);
    digitalWrite(1, LOW);
    delay(100);
  }
}
