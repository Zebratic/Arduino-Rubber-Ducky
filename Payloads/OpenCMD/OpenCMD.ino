#include <HIDKeyboard.h>
#include <Keyboard.h>

HIDKeyboard keyboard;

void setup() {
  keyboard.begin();
  delay(200);

  keyboard.pressKey(GUI, 'R');
  keyboard.releaseKey();
  delay(200);
  keyboard.println("cmd.exe");
  keyboard.pressSpecialKey(ENTER);
  keyboard.releaseKey();
}

void loop() {

}
