// // #include <ESP8266WiFi.h>  
// #include <Arduino.h> //  remove this including if using arduino ide

// const char* ssid = "Jiofiber-noInternet";
// const char* password = "BIM BIM BAM BAM";

// WiFiServer server(80);

// const char* Webserver = R"=====(
// HTTP/1.1 200 OK
// Content-Type: text/html
// Connection: close

// <!DOCTYPE html>
// <html lang="en">
// <head>
//   <meta charset="UTF-8">
//   <meta name="viewport" content="width=device-width, initial-scale=1.0">
//   <title>Wireless HID Attacks</title>
//   <script>
//     function ChangeIndex(index) {
//       window.location.href = index;
//     }
//   </script>
// </head>
// <body>
//   <hr>
//   <center><h1>Wireless Attack Menu</h1></center> <hr>
//     <h2>Annoying</h2> 
//     <ol style="list-style-type: disc;">
//       <li><button onclick="ChangeIndex('/cmd')">Test Attack</button><br></li>
//       <li><button onclick="ChangeIndex('/shutdown')">Remote Shutdown</button></li>
//       <li><button onclick="ChangeIndex('/closeapplication')">Close Open Application</button></li>
//       <li><button onclick="ChangeIndex('/MoveMouse')">Jitter Mouse</button></li>
//       <li><button onclick="ChangeIndex('/CreepyMessage')">Send Creepy Message</button></li>
//       <li><button onclick="ChangeIndex('/RickRoll')">RickRoll(Browser Should Be Opened)</button></li>
//     </ol>
// </body>
// </html>
// )=====";

// void setup() {
//   Serial.begin(9600);
//   delay(10);

//   WiFi.mode(WIFI_AP);
//   WiFi.softAP(ssid, password);

//   IPAddress IP = WiFi.softAPIP();

//   server.begin();
// }

// void loop() {
//   // Check if a client has connected
//   WiFiClient client = server.available();
//   if (!client) {
//     return;
//   }

//   // Wait until the client sends some data
//   while (!client.available()) {
//     delay(1);
//   }

//   // Read the first line of the request
//   String request = client.readStringUntil('\r');
//   client.flush();

//   // Match the request
//   if (request.indexOf("/cmd") != -1) {
//     Serial.println('1');

//   } else if (request.indexOf("/shutdown") != -1) {
//     Serial.println('2');

//   } else if (request.indexOf("/closeapplication") != -1) {
//     Serial.println('3');
//     delay(100);
//     Serial.println(' ');
//   } else if (request.indexOf("/MoveMouse") != -1) {
//     Serial.println('4');

//   } else if (request.indexOf("/CreepyMessage") != -1) {
//     Serial.println('5');

//   } else if (request.indexOf("/RickRoll") != -1) {
//     Serial.println('6');
//   }

//   // Send the complete HTTP response
//   client.println(Webserver);
//   client.stop();
// }
