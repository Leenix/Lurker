/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Nano w/ ATmega328, Platform=avr, Package=arduino
*/

#define __AVR_ATmega328p__
#define __AVR_ATmega328P__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}

//
//
void toSendBuffer(char c);
void resetSendBuffer();
char fromReceiveBuffer();
void resetReceiveBuffer();
void addRoutingTableEntry(char unitID);
void resetRoutingTable();
int findRoutingEntry(char unitID);
int floatToInt(float num, int decimalShift);
void initialiseRadio();
void startEnumeration();
void transmitChar(char unitID, char message);
void checkRadio();
void requestPackets();
void confirmNetworkJoin(char unitID);
void processNetworkJoin(char unitID);
void handleIncomingPacket();
void processReceivedPacket();
void processDataPacket(int unitID);
float decodeData(char dataCode);
void checkSerial();
void printOpeningMessage();
void printCalibrationMessage();
void printWaitingMessage();
void printFinishedCalibration();
void printSensorData();
void printDataPacket();
void sendSoundNotification();
void sendMotionNotification();
void handleSoundNotification(int unitID);
void handleMotionNotification(int unitID);
void initialiseSensors();
void initialiseLightSensor();
void initialiseMotion();
void initialiseSound();
void checkSensors();
void checkTemperature();
void checkHumidity();
void checkLight();
int getSoundLevel(int samplePeriod);
void checkSound();
void checkMovement();

#include "c:\Program Files (x86)\Arduino\hardware\arduino\avr\variants\eightanaloginputs\pins_arduino.h" 
#include "c:\Program Files (x86)\Arduino\hardware\arduino\avr\cores\arduino\arduino.h"
#include "E:\Dropbox\Projects\Lurker\Code\LurkerCoordinator\LurkerCoordinator.ino"