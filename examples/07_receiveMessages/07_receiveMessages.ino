/*
 * EBYTE LoRa E220
 *
 * Receive messages on CHANNEL 23
 * Uncomment #define ENABLE_RSSI true in this sketch
 * if the sender send RSSI also
 *
 * by Renzo Mischianti <https://www.mischianti.org>
 *
 * https://www.mischianti.org
 *
 * E220		  ----- WeMos D1 mini	----- esp32			----- Arduino Nano 33 IoT	----- Arduino MKR	----- ArduinoUNO
 * M0         ----- D7 (or 3.3v)	----- 19 (or 3.3v)	----- 2 (or 3.3v)			----- 2 (or 3.3v)	----- 7 Volt div (or 3.3v)
 * M1         ----- D6 (or 3.3v)	----- 21 (or 3.3v)	----- 4 (or 3.3v)			----- 4 (or 3.3v)	----- 6 Volt div (or 3.3v)
 * TX         ----- D3 (PullUP)		----- TX2 (PullUP)	----- TX1 (PullUP)			----- 14 (PullUP)	----- 4 (PullUP)
 * RX         ----- D4 (PullUP)		----- RX2 (PullUP)	----- RX1 (PullUP)			----- 13 (PullUP)	----- 5 Volt div (PullUP)
 * AUX        ----- D5 (PullUP)		----- 18  (PullUP)	----- 0  (PullUP)			----- 0  (PullUP)	----- 3 (PullUP)
 * VCC        ----- 3.3v/5v			----- 3.3v/5v		----- 3.3v/5v				----- 3.3v/5v		----- 3.3v/5v
 * GND        ----- GND				----- GND			----- GND					----- GND			----- GND
 *
 */

// If you want use RSSI uncomment
//#define ENABLE_RSSI true

#include "Arduino.h"
#include "LoRa_E220.h"

// ---------- esp8266 pins --------------
//LoRa_E220 e220ttl(RX, TX, AUX, M0, M1);  // Arduino RX <-- e220 TX, Arduino TX --> e220 RX
LoRa_E220 e220ttl(D3, D4, D5, D7, D6); // Arduino RX <-- e220 TX, Arduino TX --> e220 RX AUX M0 M1
//LoRa_E220 e220ttl(D2, D3); // Config without connect AUX and M0 M1

//#include <SoftwareSerial.h>
//SoftwareSerial mySerial(D2, D3); // Arduino RX <-- e220 TX, Arduino TX --> e220 RX
//LoRa_E220 e220ttl(&mySerial, D5, D7, D6); // AUX M0 M1
// -------------------------------------

// ---------- Arduino pins --------------
//LoRa_E220 e220ttl(4, 5, 3, 7, 6); // Arduino RX <-- e220 TX, Arduino TX --> e220 RX AUX M0 M1
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

void setup() {
  Serial.begin(9600);
  delay(500);

  // Startup all pins and UART
  e220ttl.begin();

  Serial.println("Start receiving!");
}

void loop() {
	// If something available
  if (e220ttl.available()>1) {
	  Serial.println("Message received!");

	  // read the String message
#ifdef ENABLE_RSSI
	ResponseContainer rc = e220ttl.receiveMessageRSSI();
#else
	ResponseContainer rc = e220ttl.receiveMessage();
#endif
	// Is something goes wrong print error
	if (rc.status.code!=1){
		Serial.println(rc.status.getResponseDescription());
	}else{
		// Print the data received
		Serial.println(rc.status.getResponseDescription());
		Serial.println(rc.data);
#ifdef ENABLE_RSSI
		Serial.print("RSSI: "); Serial.println(rc.rssi, DEC);
#endif
	}
  }
}

