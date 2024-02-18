#include <Arduino.h>
#include <Keyboard.h>


const char Wireless_Attacks_Webpage[] PROGMEM = R"rawliteral(
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Wireless Attacks</title>
    </head>
    <body>
        <hr>
        <center><h1>WIRELESS ATTACKS</h1></center>
        <hr>
        <Center><button onclick="window.location.href = 'cmd';">TEST ATTACK</button></Center>
    </body>
    </html>
    )rawliteral";

class Wireless_Attacks
{
    public:
    void init();
    void TEST_1();
    void RemoteShutdown();

    
};