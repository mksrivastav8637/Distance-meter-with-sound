/*Written by Mayank Srivastav*/
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

// Include the necessary libraries
#include <NewPing.h>
// Define the pins for ultrasonic sensor
#define TRIGGER_PIN 5
#define ECHO_PIN 4
// Create an instance of the NewPing library
NewPing sonar(TRIGGER_PIN, ECHO_PIN);

// Use pins 2 and 3 to communicate with DFPlayer Mini
static const uint8_t PIN_MP3_TX = 3; // Connects to module's RX 
static const uint8_t PIN_MP3_RX = 2; // Connects to module's TX 
SoftwareSerial softwareSerial(PIN_MP3_RX, PIN_MP3_TX);

// Create the Player object
DFRobotDFPlayerMini player;

void setup() {

  // Init USB serial port for debugging
  Serial.begin(9600);
  // Init serial port for DFPlayer Mini
  softwareSerial.begin(9600);

  // Start communication with DFPlayer Mini
  if (player.begin(softwareSerial)) {
   Serial.println("OK");

    // Set volume to maximum (0 to 30)
    player.volume(30);
     player.play(21);
    delay(2000); 
    player.play(0);
    
  } else {
    Serial.println("Connecting to DFPlayer Mini failed!");
  }
}

void loop() {
  digitalWrite(A2,LOW);
  delay(50); // Delay between measurements
 digitalWrite(A2,LOW);
  // Send a ping and get the distance in centimeters
  unsigned int distance = sonar.ping_cm();

  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

if(distance==1)
{
 // Play the first MP3 file on the SD card
    player.play(1);
    delay(2000);
    }
 if(distance==2)
{
 // Play the first MP3 file on the SD card
    player.play(2);
    delay(2000);
    }
if(distance==3)
{
 // Play the first MP3 file on the SD card
    player.play(3);
    delay(1000);
    }
 if(distance==4)
{
 // Play the first MP3 file on the SD card
    player.play(4);
    delay(2000);
    }   
if(distance==5)
{
 // Play the first MP3 file on the SD card
    player.play(5);
    delay(2000);
    }
 if(distance==6)
{
 // Play the first MP3 file on the SD card
    player.play(6);
    delay(2000);
    }  
if(distance==7)
{
 // Play the first MP3 file on the SD card
    player.play(7);
    delay(2000);
    }
 if(distance==8)
{
 // Play the first MP3 file on the SD card
    player.play(8);
    delay(2000);
    }   
if(distance==9)
{
 // Play the first MP3 file on the SD card
    player.play(9);
    delay(2000);
    }
 if(distance==10)
{
 // Play the first MP3 file on the SD card
    player.play(10);
    delay(2000);
    } 
if(distance==11)
{
 // Play the first MP3 file on the SD card
    player.play(12);
    delay(2000);
    }
 if(distance==12)
{
 // Play the first MP3 file on the SD card
    player.play(13);
    delay(2000);
    }
if(distance==13)
{
 // Play the first MP3 file on the SD card
    player.play(13);
    delay(1000);
    }
 if(distance==11)
{
 // Play the first MP3 file on the SD card
    player.play(14);
    delay(2000);
    }   
if(distance==15)
{
 // Play the first MP3 file on the SD card
    player.play(15);
    delay(2000);
    }
 if(distance==16)
{
 // Play the first MP3 file on the SD card
    player.play(16);
    delay(2000);
    }  
if(distance==17)
{
 // Play the first MP3 file on the SD card
    player.play(17);
    delay(2000);
    }
 if(distance==18)
{
 // Play the first MP3 file on the SD card
    player.play(18);
    delay(2000);
    }   
if(distance==19)
{
 // Play the first MP3 file on the SD card
    player.play(19);
    delay(2000);
    }
 if(distance==20)
{
 // Play the first MP3 file on the SD card
    player.play(20);
    delay(2000);
    }               
}
