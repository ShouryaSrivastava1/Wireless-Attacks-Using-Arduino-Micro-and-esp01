#include "Attacks.h"

BleKeyboard keyboard;

void attacks::init_keyboard()
{
    keyboard.setName("Bletooth");
    keyboard.begin();
    pinMode(2, OUTPUT);
}

void attacks::RickRoll()
{
    if (keyboard.isConnected())
    {
        keyboard.press(KEY_LEFT_GUI);
        delay(10);
        keyboard.release(KEY_LEFT_GUI);
        delay(1000);
        keyboard.print("Chrome");
        delay(1000);
        keyboard.press(KEY_RETURN);
        delay(300);
        keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
        keyboard.press(KEY_RETURN);
        keyboard.releaseAll();
        Serial.println("Attacked Done");
    }
}

void attacks::Test()
{
    if(keyboard.isConnected())
    {
        keyboard.press(KEY_LEFT_GUI);
        keyboard.press('r');
        keyboard.releaseAll();
        keyboard.print("cmd");
        keyboard.press(KEY_RETURN);
        keyboard.releaseAll();
        Serial.println("Attacked Done");
    }
}
