#include <Arduino.h>
#include <Keyboard.h>
#include <Mouse.h>
#include <SoftwareSerial.h>

class Wireless_Attacks
{
    private:
    // Just Presses Enter(im lazy to write 2 lines of code everytime i want to press enter)
    void PressEnter();



    public:
    // Initiates Everything
    void init();

    // Attacks start

    // test attack which opens cmd 
    void TEST_1();

    // remotely shut down the pc
    void RemoteShutdown();

    // close the application
    void CloseApplication();

    // open new tab with rickroll
    void RickRoll(); 

    // print a creepy message on notepad
    void CreepyMessage(); 

    // move you mouse to random location like 100 times
    void MoveMouseToRandomLocations();



    // Attacks End
    
    // Handles The Signals From the Esp01 and execute the HID Attacks
    void Handle();
    
};