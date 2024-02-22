#include "WirelessAttacks.h"

SoftwareSerial WebpageSerial(10, 9);


void Wireless_Attacks::PressEnter()
{
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
}


void Wireless_Attacks::init()
{
    Serial.begin(9600);
    Keyboard.begin();
    Mouse.begin();
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
    PressEnter();
    delay(1000);
    Keyboard.print("color a");
    delay(100);
    PressEnter();
    delay(1000);
    Keyboard.print("dir/s");
    delay(100);
    PressEnter();
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
    delay(200);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    delay(3);
    Keyboard.releaseAll();
    // Keyboard.press(KEY_RETURN);
    // Keyboard.releaseAll();
}

void Wireless_Attacks::CloseApplication()
{
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);
    Keyboard.releaseAll();
}

void Wireless_Attacks::RickRoll()
{
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('t');
    Keyboard.releaseAll();
    delay(600);
    Keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    delay(10);
    PressEnter();

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
    PressEnter();
    delay(500);
    Keyboard.print("start notepad");
    PressEnter();
    delay(400);
    Keyboard.print("THEY ARE LOOKING AT YOU");
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(2000);
    Keyboard.print("YOU ARE NOT SAFE!");
    PressEnter();
    delay(2000);
    Keyboard.print("THEY ARE AFTER YOUR SOUL.......");
    PressEnter();
    delay(2000);
    Keyboard.print("YOU NEED TO HIDE!");
    PressEnter();
    delay(2000);
    Keyboard.print("THEY ARE COMMING FOR YOU");
    delay(4000);
    for(int i = 0; i < 30; i++)
    {
        PressEnter();
        Keyboard.print("HIDE.....");
        delay(1000);
        
    }
}

void Wireless_Attacks::MoveMouseToRandomLocations()
{
    for (int i = 0; i < 100; i++)
    {
        int MouseX = random(0, 1920);
        int MouseY = random(0, 1080);
        Mouse.move(MouseX, MouseY);
        delay(100);
    }
    
}

void Wireless_Attacks::Handle()
{
    if(WebpageSerial.available())
    {
        char command = WebpageSerial.read();
        if(command == '1'){Serial.println("Starting Test Attack"); TEST_1();}
        else if(command == '2'){Serial.println("Launching Remote Shutdown"); RemoteShutdown();}
        else if(command == '3'){Serial.println("Closing Application"); CloseApplication();}
        else if(command == '4') {Serial.println("Sending Creepy Message Attack"); CreepyMessage();}
        else if(command == '5'){Serial.println("Opening RickRoll"); RickRoll();}
        else if(command == '6'){Serial.println("Moving MOuse"); MoveMouseToRandomLocations();}
    }
}
