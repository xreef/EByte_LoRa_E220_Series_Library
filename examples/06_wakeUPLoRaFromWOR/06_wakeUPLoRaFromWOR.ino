/*
 * EBYTE LoRa E220
 * Stay in sleep mode and wait a wake up WOR message
 *
 * You must configure the address with 0 2 23 (FIXED RECEIVER configuration)
 * and pay attention that WOR period must be the same of sender
 *
 * You must uncommend the correct constructor and set the correct AUX_PIN define.
 *
 * by Renzo Mischianti <https://www.mischianti.org>
 *
 * https://www.mischianti.org
 *
 * E220		  ----- WeMos D1 mini	----- esp32			----- Arduino Nano 33 IoT	----- Arduino MKR	----- ArduinoUNO
 * M0         ----- D7 (or GND)		----- 19 (or GND)	----- 4 (or GND)			----- 2 (or GND)	----- 7 Volt div (or GND)
 * M1         ----- D6 (or 3.3v)	----- 21 (or 3.3v)	----- 6 (or 3.3v)			----- 4 (or 3.3v)	----- 6 Volt div (or 3.3v)
 * TX         ----- D3 (PullUP)		----- TX2 (PullUP)	----- TX1 (PullUP)			----- 14 (PullUP)	----- 4 (PullUP)
 * RX         ----- D4 (PullUP)		----- RX2 (PullUP)	----- RX1 (PullUP)			----- 13 (PullUP)	----- 5 Volt div (PullUP)
 * AUX        ----- D5 (PullUP)		----- 18  (PullUP)	----- 2  (PullUP)			----- 0  (PullUP)	----- 3 (PullUP)
 * VCC        ----- 3.3v/5v			----- 3.3v/5v		----- 3.3v/5v				----- 3.3v/5v		----- 3.3v/5v
 * GND        ----- GND				----- GND			----- GND					----- GND			----- GND
 *
 */

// With FIXED RECEIVER configuration
#define DESTINATION_ADDL 2

#define AUX_PIN 15

#include "Arduino.h"
#include "LoRa_E220.h"

// ---------- esp8266 pins --------------
//LoRa_E220 e220ttl(RX, TX, AUX, M0, M1);  // Arduino RX <-- e220 TX, Arduino TX --> e220 RX
//LoRa_E220 e220ttl(D3, D4, D5, D7, D6); // Arduino RX <-- e220 TX, Arduino TX --> e220 RX AUX M0 M1
//LoRa_E220 e220ttl(D2, D3); // Config without connect AUX and M0 M1

//#include <SoftwareSerial.h>
//SoftwareSerial mySerial(D2, D3); // Arduino RX <-- e220 TX, Arduino TX --> e220 RX
//LoRa_E220 e220ttl(&mySerial, D5, D7, D6); // AUX M0 M1
// -------------------------------------

// ---------- Arduino pins --------------
LoRa_E220 e220ttl(4, 5, 3, 7, 6); // Arduino RX <-- e220 TX, Arduino TX --> e220 RX AUX M0 M1
//LoRa_E220 e220ttl(4, 5); // Config without connect AUX and M0 M1

//#include <SoftwareSerial.h>
//SoftwareSerial mySerial(4, 5); // Arduino RX <-- e220 TX, Arduino TX --> e220 RX
//LoRa_E220 e220ttl(&mySerial, 3, 7, 6); // AUX M0 M1
// -------------------------------------

// ------------- Arduino Nano 33 IoT -------------
// LoRa_E220 e220ttl(&Serial1, 2, 4, 6); //  RX AUX M0 M1
// -------------------------------------------------

// ------------- Arduino MKR WiFi 1010 -------------
// LoRa_E220 e220ttl(&Serial1, 0, 2, 4); //  RX AUX M0 M1
// -------------------------------------------------

// ---------- esp32 pins --------------
// LoRa_E220 e220ttl(&Serial2, 15, 21, 19); //  RX AUX M0 M1

//LoRa_E220 e220ttl(&Serial2, 22, 4, 18, 21, 19, UART_BPS_RATE_9600); //  esp32 RX <-- e220 TX, esp32 TX --> e220 RX AUX M0 M1
// -------------------------------------

 bool interruptExecuted = false;
#ifdef ESP32
 void IRAM_ATTR wakeUp() {
	 // Do not use Serial on interrupt callback
	 interruptExecuted = true;
	 detachInterrupt(AUX_PIN);
 }
#elif define(ESP8266)
 ICACHE_RAM_ATTR void wakeUp() {
	 // Do not use Serial on interrupt callback
	 interruptExecuted = true;
	 detachInterrupt(AUX_PIN);
 }
#else
 void wakeUp() {
 	 // Do not use Serial on interrupt callback
 	 interruptExecuted = true;
 	 detachInterrupt(AUX_PIN);
  }
#endif

//The setup function is called once at startup of the sketch
void setup() {
	Serial.begin(9600);
	while (!Serial) {
		; // wait for serial port to connect. Needed for native USB
	}
	delay(100);

	e220ttl.begin();

	e220ttl.setMode(MODE_2_WOR_RECEIVER);

	delay(1000);
	Serial.println();
	Serial.println("Start sleep!");
	delay(100);
    attachInterrupt(AUX_PIN, wakeUp, FALLING);
}

// The loop function is called in an endless loop
void loop() {
	if (e220ttl.available() > 1) {
		Serial.println("Message arrived!");
		ResponseContainer rs = e220ttl.receiveMessage();
		// First of all get the data
		String message = rs.data;

		Serial.println(rs.status.getResponseDescription());
		Serial.println(message);

		// Work only with full connection
		e220ttl.setMode(MODE_0_NORMAL);

		delay(1000);

		ResponseStatus rsSend = e220ttl.sendFixedMessage(0, DESTINATION_ADDL, 23, "We have received the message!");
		// Check If there is some problem of succesfully send
		Serial.println(rsSend.getResponseDescription());
	}

	if(interruptExecuted) {
		Serial.println("WakeUp Callback, AUX pin go LOW and start receive message!");
		Serial.flush();
		interruptExecuted = false;
	}
}
