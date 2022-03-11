<div>
<a href="https://www.mischianti.org/forums/forum/mischiantis-libraries/ebyte-lora-e220-uart-devices-llcc68/"><img
  src="https://github.com/xreef/LoRa_E32_Series_Library/raw/master/resources/buttonSupportForumEnglish.png" alt="Support forum EByte e220 English"
   align="right"></a>
</div>
<div>

<br/>
<a href="https://www.mischianti.org/it/forums/forum/le-librerie-di-mischianti/ebyte-e220-dispositivi-lora-uart-llcc68/"><img
  src="https://github.com/xreef/LoRa_E32_Series_Library/raw/master/resources/buttonSupportForumItaliano.png" alt="Forum supporto EByte e220 italiano"
  align="right"></a>
</div>



# Tutorial 

- [Ebyte LoRa E220 device for Arduino, esp32 or esp8266: settings and basic usage](https://www.mischianti.org/2022/03/11/ebyte-lora-e220-llcc68-device-for-arduino-esp32-or-esp8266-specs-and-basic-use-1/)
- Ebyte LoRa E220 device for Arduino, esp32 or esp8266: library
- Ebyte LoRa E220 device for Arduino, esp32 or esp8266: configuration
- Ebyte LoRa E220 device for Arduino, esp32 or esp8266: fixed transmission, broadcast, monitor, and RSSI
- Ebyte LoRa E220 device for Arduino, esp32 or esp8266: power saving and sending structured data
- Ebyte LoRa E220 device for Arduino, esp32 or esp8266: WOR microcontroller and Arduino shield
- Ebyte LoRa E220 device for Arduino, esp32 or esp8266: WOR microcontroller and WeMos D1 shield
- Ebyte LoRa E220 device for Arduino, esp32 or esp8266: WOR microcontroller and esp32 dev v1 shield

# An Arduino UNO shield to simplify the use
![Arduino UNO shield](https://www.mischianti.org/wp-content/uploads/2019/12/ArduinoShieldMountedE32LoRa_min.jpg)

You can order the PCB  [here](https://www.pcbway.com/project/shareproject/LoRa_E32_Series_device_Arduino_shield.html) 

Instruction and assembly video on 6 part of the guide

# An WeMos D1 shield to simplify the use
![Arduino UNO shield](https://www.mischianti.org/wp-content/uploads/2020/01/WeMosD1ShieldMountedE32LoRa_min.jpg)

You can order the PCB  [here](https://www.pcbway.com/project/shareproject/LoRa_E32_Series_device_WeMos_D1_mini_shield_RF_8km_range.html) 

Instruction and assembly video on 6 part of the guide



# Ebyte LoRa E220 LLCC68 device for Arduino, esp32 or esp8266: library



<div class="amp-wp-article-content">
		<br>
<p><strong><strong>LoRa or Long Range wireless data telemetry</strong> </strong>is a technology pioneered by Semtech that operates at a lower frequency than NRF24L01 (433 MHz, 868 MHz, or 916 MHz against 2.4 GHz for the NRF24L01) but at thrice the distance (from 5000m to 11000m).  </p>


      

<div class="mischianti-forum-button-container">
  	<a class="mischianti-forum-button" href="https://www.mischianti.org/forums/forum/mischiantis-libraries/ebyte-lora-e220-uart-devices-llcc68/" target="_blank">Support Forum</a>
</div>



<div class="wp-block-image">
<img src="https://www.mischianti.org/wp-content/uploads/2021/12/Ebyte-LoRa-E220-LLCC68-device-for-Arduino-esp32-or-esp8266-library-520x280.jpg"/>
</div>



<h2>LLCC68 </h2>



<p>LoRa Smart Home (LLCC68) is a sub-GHz LoRa® RF Transceiver for medium-range indoor and indoor to outdoor wireless applications. SPI interface. Pin-to-pin is compatible with SX1262. SX1261, SX1262, SX1268, and LLCC68 are designed for long battery life with just 4.2 mA of active receive current consumption. The SX1261 can transmit up to +15 dBm, and the SX1262, SX1268, and LLCC68 can transmit up to +22 dBm with highly efficient integrated power&nbsp;amplifiers.</p>



<div class="wp-block-image">
<img src="https://www.mischianti.org/wp-content/uploads/2021/12/EByte-LoRa-E220-LLCC68-photo-3-devices-red-520x331.jpg"/>
</div>



<p>These devices support LoRa modulation for LPWAN use cases and (G)FSK modulation for legacy use cases. The devices are highly configurable to meet different application requirements for consumer use. The device provides LoRa modulation compatible with Semtech transceivers used by the LoRaWAN® specification released by the LoRa Alliance®. The radio is suitable for systems targeting compliance with radio regulations, including but not limited to ETSI EN 300 220, FCC CFR 47 Part 15, China regulatory requirements, and the Japanese ARIB T-108. Continuous frequency coverage from 150MHz to 960MHz allows the support of all major sub-GHz ISM bands around the world.</p>



<h2>Features</h2>



<ul><li>The new LoRa spread spectrum modulation technology developed based on LLCC68, it brings a more extended communication distance and stronger anti-interference ability;</li><li>Support users to set the communication key by themselves, and it cannot be read, which significantly improves the confidentiality of user data;</li><li>Support LBT function, monitor the channel environment noise before sending, which significantly improves the communication success rate of the module in harsh environments;</li><li>Support RSSI signal strength indicator function for evaluating signal quality, improving communication network, and ranging;</li><li>Support air wakeup, that is ultra-low power consumption, suitable for battery-powered applications;</li><li>Support point to point transmission, broadcast transmission, channel sense;</li><li>Support deep sleep, the power consumption of the whole machine is about 5uA in this mode;</li><li>The module has built-in PA+LNA, and the communication distance can reach 5km under ideal conditions;</li><li>The parameters are saved after power-off, and the module will work according to the set parameters after power-on;</li><li>Efficient watchdog design, once an exception occurs, the module will automatically restart and continue to work according to the previous parameter settings;</li><li>Support the bit rate of2.4k～62.5kbps;</li><li>Support 3.0～5.5V power supply, power supply greater than 5V can guarantee the best performance;</li><li>Industrial standard design, supporting long-term use at -40～+85℃;</li></ul>



<h2>Comparison</h2>



<figure class="wp-block-table mischianti-table-left"><table class="has-pale-ocean-gradient-background has-background"><thead><tr><th></th><th>LLCC68</th><th>SX1278-SX1276</th></tr></thead><tbody><tr><td>Distance</td><td>&gt; 11Km</td><td>8Km</td></tr><tr><td>Rate (LoRa)</td><td>1.76Kbps – 62.5Kbps </td><td>0.3Kbps – 19.2Kbps</td></tr><tr><td>Sleep power consumption</td><td>2µA </td><td>5µA</td></tr></tbody></table></figure>



<h1>Library</h1>



<p>You can find my library&nbsp;<a rel="noreferrer noopener" href="https://github.com/xreef/EByte_LoRa_E220_Series_Library" data-type="URL" data-id="https://github.com/xreef/EByte_LoRa_E220_Series_Library" target="_blank">here</a>, and It’s available on Arduino IDE library manager.</p>



<div class="wp-block-image">
<img src="https://www.mischianti.org/wp-content/uploads/2021/12/EByte-LoRa-E22-E32-sx1262-sx1268-sx1278-sx1276-Arduino-library-manager-520x293.jpg"/>
</div>



<p>To download.</p><div class="code-block code-block-2 amp-wp-d1954fa" data-amp-original-style="margin: 8px 0; clear: both;">
</div>




<p>Click the&nbsp;<a rel="noreferrer noopener" href="https://github.com/xreef/EByte_LoRa_E220_Series_Library/archive/refs/heads/master.zip" target="_blank" data-type="URL" data-id="https://github.com/xreef/EByte_LoRa_E220_Series_Library/archive/refs/heads/master.zip">DOWNLOADS&nbsp;</a>button in the top right corner, rename the uncompressed folder LoRa_E220.</p>



<p>Check that the  LoRa_E220 folder contains  LoRa_E220.cpp and  LoRa_E220.h.</p>



<p>Place the  LoRa_E220 library folder in your /libraries/ folder.</p>



<p>You may need to create the libraries subfolder if it’s your first library.</p>



<p>Restart the IDE.</p><div class="code-block code-block-10 ai-viewport-2 ai-viewport-3 amp-wp-a750a3a" data-amp-original-style="margin: 8px auto; text-align: center; clear: both;">
</div>
<div class="code-block code-block-9 ai-viewport-1 amp-wp-a750a3a" data-amp-original-style="margin: 8px auto; text-align: center; clear: both;">
</div>




<h2>Pinout</h2>



<div class="wp-block-image">
<img src="https://www.mischianti.org/wp-content/uploads/2019/09/sx1278-sx1276-wireless-lora-uart-module-serial-3000m-arduino-433-rf-robotedu-1705-13-robotedu@101.jpg"/>
</div>



<figure class="wp-block-table mischianti-table-left"><table class="has-very-light-gray-to-cyan-bluish-gray-gradient-background has-background"><thead><tr><th>Pin No.</th><th>Pin item</th><th>Pin direction</th><th>Pin application</th></tr></thead><tbody><tr><td>1</td><td>M0</td><td>Input（weak pull-up）</td><td>Work with M1 &amp; decide the four operating modes. Floating is not allowed; it can be ground.</td></tr><tr><td>2</td><td>M1</td><td>Input（weak pull-up）</td><td>Work with M0 &amp; decide the four operating modes. Floating is not allowed; it can be ground.</td></tr><tr><td>3</td><td>RXD</td><td>Input</td><td>TTL UART inputs connect to external (MCU, PC) TXD output pin. It can be configured as open-drain or pull-up input.</td></tr><tr><td>4</td><td>TXD</td><td>Output</td><td>TTL UART outputs connect to external RXD (MCU, PC) input pin. Can be configured as open-drain or push-pull output</td></tr><tr><td><br>5</td><td><br>AUX</td><td><br>Output</td><td>To indicate the module’s working status &amp; wake up the external MCU. During the procedure of self-check initialization, the pin outputs a low level. It can be configured as open-drain or push-pull output (floating is allowed).</td></tr><tr><td>6</td><td>VCC</td><td></td><td>Power supply 3V~5.5V DC</td></tr><tr><td>7</td><td>GND</td><td></td><td>Ground</td></tr></tbody></table></figure>



<p>As you can see, you can set various modes via M0 and M1 pins.</p>



<figure class="wp-block-table is-style-stripes mischianti-table-left"><table class="has-very-light-gray-to-cyan-bluish-gray-gradient-background has-background"><thead><tr><th><strong>Mode</strong></th><th><strong>M1</strong></th><th><strong>M0</strong></th><th><strong>Explanation</strong></th></tr></thead><tbody><tr><td>Normal</td><td>0</td><td>0</td><td>UART and wireless channels are open, and transparent transmission is on</td></tr><tr><td>WOR Transmitter</td><td>0</td><td>1</td><td>WOR Transmitter</td></tr><tr><td>WOR Receiver</td><td>1</td><td>0</td><td>WOR Receiver (Supports wake up over air)</td></tr><tr><td>Deep sleep mode</td><td>1</td><td>1</td><td>The module goes to sleep (automatically wake up when configuring parameters)</td></tr></tbody></table></figure>



<p> Some pins can be used statically, but If you connect them to the microcontroller and configure them in the library, you gain in performance and can control all modes via software. Still, we are going to explain better next.</p>



<h1>Fully connected schema</h1>



<p>As I already said, It’s not essential to connect all pins to the microcontroller’s output; you can put M0 and M1 pins to HIGH or LOW to get the desired configuration. If<strong> you don’t connect AUX, the library set a reasonable delay to ensure that the operation is complete</strong> (<strong>If you have trouble</strong> with the <strong>device <strong>freezing</strong>, </strong> <strong>you must put a pull-up 4.7k resistor or better connect to the device.</strong> ).</p>



<h2>AUX pin</h2>



<p>When transmitting data can be used to wake up external MCU and return HIGH on data transfer finish.</p>



<div class="wp-block-image">
<img src="https://www.mischianti.org/wp-content/uploads/2019/10/e32auxPinOnTransmission-1024x269.jpg"/>
</div>



<p>When receiving, AUX goes LOW and returns HIGH when the buffer is empty.</p>



<div class="wp-block-image"><img src="https://www.mischianti.org/wp-content/uploads/2019/10/e32auxPinOnReception-1024x342.jpg"/></div>



<p>It’s also used for self-checking to restore regular operation (on power-on and sleep/program mode).</p>



<div class="wp-block-image">
<img src="https://www.mischianti.org/wp-content/uploads/2019/10/e32auxPinOnSelfCheck-1024x312.jpg"/>
</div>



<h2> esp8266 </h2>



<p>esp8266 connection schema is more straightforward because it works at the same voltage of logical communications (3.3v).</p>



<div class="wp-block-image">
<img src="https://www.mischianti.org/wp-content/uploads/2019/10/LoRa_E32-TTL-100_WemosD1_VD_PU_FullyConnected_bb-e1570517387323.jpg"/>
</div>



<p>It’s essential to add a pull-up resistor (4,7Kohm) to get good stability.</p>



<figure class="wp-block-table mischianti-table-left"><table><thead><tr><th>E22</th><th>esp8266</th></tr></thead><tbody><tr><td>M0</td><td>D7</td></tr><tr><td>M1</td><td>D6</td></tr><tr><td>TX</td><td>PIN D2 (PullUP 4,7KΩ)</td></tr><tr><td>RX</td><td>PIN D3 (PullUP 4,7KΩ)</td></tr><tr><td>AUX</td><td>PIN D5 (PullUP 4,7KΩ)</td></tr><tr><td>VCC</td><td>5V (but work with less power in 3.3v)</td></tr><tr><td>GND</td><td>GND</td></tr><tr><td></td><td></td></tr></tbody></table></figure>



<h2>esp32</h2>



<p>Similar connection schema for esp32, but for RX and TX, we use RX2 and TX2 because, by default, esp32 doesn’t have SoftwareSerial but has 3 Serial.</p>



<div class="wp-block-image">
<img src="https://www.mischianti.org/wp-content/uploads/2020/08/Ebyte-LoRa-E22-device-esp32-dev-kit-v1-breadboard-full-connection-768x668.jpg"/>
</div>



<figure class="wp-block-table mischianti-table-left"><table><thead><tr><th>E22</th><th>esp32</th></tr></thead><tbody><tr><td>M0</td><td>D21</td></tr><tr><td>M1</td><td>D19</td></tr><tr><td>TX</td><td>PIN RX2 (PullUP 4,7KΩ)</td></tr><tr><td>RX</td><td>PIN TX3 (PullUP 4,7KΩ)</td></tr><tr><td>AUX</td><td>PIN D18 (PullUP 4,7KΩ) (D15 to wake up)</td></tr><tr><td>VCC</td><td>5V (but work with less power in 3.3v)</td></tr><tr><td>GND</td><td>GND</td></tr><tr><td></td><td></td></tr></tbody></table></figure>



<h2>Arduino</h2>



<p>Arduino’s working voltage is 5v, so we need to add a voltage divider on RX pin M0 and M1 of LoRa module to prevent damage; you can get more information here <a href="https://www.mischianti.org/2019/06/15/voltage-divider-calculator-and-application/">Voltage divider: calculator and application</a>.</p>



<p>You can use a 2Kohm resistor to GND and 1Kohm from the signal, then put them together on RX. </p>



<div class="wp-block-image"><img src="https://www.mischianti.org/wp-content/uploads/2019/10/LoRa_E32-TTL-100_Arduino_VD_PU_FullyConnected_bb-e1570517268668.jpg"/></div>



<figure class="wp-block-table mischianti-table-left"><table><tbody><tr><td>M0</td><td>7 (voltage divider)</td></tr><tr><td>M1</td><td>6 (voltage divider)</td></tr><tr><td>TX</td><td>PIN 2 (PullUP 4,7KΩ)</td></tr><tr><td>RX</td><td>PIN 3 (PullUP 4,7KΩ &amp; Voltage divider)</td></tr><tr><td>AUX</td><td>PIN 5 (PullUP 4,7KΩ)</td></tr><tr><td>VCC</td><td>5V</td></tr><tr><td>GND</td><td>GND</td></tr><tr><td></td><td></td></tr></tbody></table></figure>



<h2>Arduino MKR WiFi 1010 </h2>



<div class="wp-block-image"><img src="https://www.mischianti.org/wp-content/uploads/2021/12/Ebyte_LoRa_Exx_Arduino_MKR_WiFi_1010_Fully_connected_breadboard-520x450.jpg"/></div>



<figure class="wp-block-table mischianti-table-left"><table><tbody><tr><td>M0</td><td>2 (voltage divider)</td></tr><tr><td>M1</td><td>3 (voltage divider)</td></tr><tr><td>TX</td><td>PIN 14 Tx (PullUP 4,7KΩ)</td></tr><tr><td>RX</td><td>PIN 13 Rx (PullUP 4,7KΩ)</td></tr><tr><td>AUX</td><td>PIN 1 (PullUP 4,7KΩ)</td></tr><tr><td>VCC</td><td>5V</td></tr><tr><td>GND</td><td>GND</td></tr></tbody></table></figure>



<h1>Constructor</h1>



<p>I made a set of numerous constructors because we can have more options and situations to manage.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">		LoRa_E220(byte txE220pin, byte rxE220pin, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600);
		LoRa_E220(byte txE220pin, byte rxE220pin, byte auxPin, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600);
		LoRa_E220(byte txE220pin, byte rxE220pin, byte auxPin, byte m0Pin, byte m1Pin, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600);
</pre></div>


<p>The first set of constructors is created to delegate Serial and other pins to the library.</p>



<ul><li><code>txE220pin</code> and <code>rxE220pin</code> are the pins to connect to UART. They are <strong>mandatory</strong>.</li><li><code>auxPin </code>is a pin that checks the operation, transmission, and receiving status (we are going to explain better next), that pin <strong>isn’t mandatory</strong>; if you don’t set It, I apply a delay to permit the operation to complete itself (with latency,  i<strong>f you have trouble, like freeze device, you must put a pull-up 4.7k resistor or better connect to the device</strong> ).</li><li><code>m0pin </code>and <code>m1Pin </code>are the pins to change operation MODE (see the table upper), I think <strong>this pins in “production” are going to connect directly HIGH or LOW</strong>. Still, for a test, they are helpful to be managed by the library.</li><li><code>bpsRate </code>is the baud rate of SoftwareSerial is typically 9600 (the only baud rate in programming/sleep mode)</li></ul>



<p>A simple example is</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">#include "LoRa_E220.h"

LoRa_E32 e220ttl(2, 3);  // e22 TX e22 RX
// LoRa_E32 e32ttl(2, 3, 5, 6, 7);  // e22 TX e22 RX
</pre></div>


<p>We can use a SoftwareSerial directly with another constructor</p><div class="code-block code-block-2 amp-wp-d1954fa" data-amp-original-style="margin: 8px 0; clear: both;">
</div>



<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">		LoRa_E220(HardwareSerial* serial, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600);
		LoRa_E220(HardwareSerial* serial, byte auxPin, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600);
		LoRa_E220(HardwareSerial* serial, byte auxPin, byte m0Pin, byte m1Pin, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600);
</pre></div>


<p>The example upper with this constructor can be done like so.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">#include &lt;SoftwareSerial.h&gt;
#include "LoRa_E220.h"

SoftwareSerial mySerial(2, 3); // e220 TX e220 RX
LoRa_E220 e220ttl(&amp;mySerial);
// LoRa_E220 e220ttl(&amp;mySerial, 5, 7, 6);
</pre></div>


<p>The last set of constructors is to permit an HardwareSerial instead of SoftwareSerial.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">		LoRa_E220(SoftwareSerial* serial, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600);
		LoRa_E220(SoftwareSerial* serial, byte auxPin, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600);
		LoRa_E220(SoftwareSerial* serial, byte auxPin, byte m0Pin, byte m1Pin, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600);
</pre></div>


<p>For esp32, you have three additional constructors to permit to manage pins for HardWare serial.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">			LoRa_E220(byte txE220pin, byte rxE220pin, HardwareSerial* serial, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600, uint32_t serialConfig = SERIAL_8N1);
			LoRa_E220(byte txE220pin, byte rxE220pin, HardwareSerial* serial, byte auxPin, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600, uint32_t serialConfig = SERIAL_8N1);
			LoRa_E220(byte txE220pin, byte rxE220pin, HardwareSerial* serial, byte auxPin, byte m0Pin, byte m1Pin, UART_BPS_RATE bpsRate = UART_BPS_RATE_9600, uint32_t serialConfig = SERIAL_8N1);

</pre></div>


<h1>Begin</h1>



<p>The begin command is used to startup Serial and pins in input and output mode.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: cpp; title: ; notranslate" title="">void begin();
</pre></div>


<p>in execution is</p><div class="code-block code-block-10 ai-viewport-2 ai-viewport-3 amp-wp-a750a3a" data-amp-original-style="margin: 8px auto; text-align: center; clear: both;">
</div>
<div class="code-block code-block-9 ai-viewport-1 amp-wp-a750a3a" data-amp-original-style="margin: 8px auto; text-align: center; clear: both;">
</div>



<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">	// Startup all pins and UART
	e220ttl.begin();
</pre></div>


<h1>Configuration and method to get information</h1>



<p>There are many methods for managing configuration and getting information about the device.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">		ResponseStructContainer getConfiguration();
		ResponseStatus setConfiguration(Configuration configuration, PROGRAM_COMMAND saveType = WRITE_CFG_PWR_DWN_LOSE);

		ResponseStructContainer getModuleInformation();
        void printParameters(struct Configuration configuration);
        ResponseStatus resetModule();
</pre></div>


<h2>Response containers</h2>



<p>To simplify the management of response, I created a set of containers, which is very useful for managing errors and returning generic data.</p>



<h2>ResponseStatus</h2>



<p>The  <code>ResponseStatus is a status container and has two</code> simple entry points, with this you can get the status code and the description of the status code</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">	Serial.println(c.getResponseDescription()); // Description of code
	Serial.println(c.code); // 1 if Success
</pre></div>


<p>The code is</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">  SUCCESS = 1,
  ERR_E220_UNKNOWN,
  ERR_E220_NOT_SUPPORT,
  ERR_E220_NOT_IMPLEMENT,
  ERR_E220_NOT_INITIAL,
  ERR_E220_INVALID_PARAM,
  ERR_E220_DATA_SIZE_NOT_MATCH,
  ERR_E220_BUF_TOO_SMALL,
  ERR_E220_TIMEOUT,
  ERR_E220_HARDWARE,
  ERR_E220_HEAD_NOT_RECOGNIZED
</pre></div>


<h2>ResponseContainer </h2>



<p>This container is created to manage String response and has two entry points.</p>



<p><code>data </code>with the string returned from the message and <code>status </code>an instance of <code>RepsonseStatus</code>.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">		ResponseContainer rs = e220ttl.receiveMessage();
		String message = rs.data;

		Serial.println(rs.status.getResponseDescription());
		Serial.println(message);
</pre></div>


<p>But this command goes to read all the data in the buffer. If you receive three messages, you are going to read all three notes at one time, and my simple solution is to use an end character to send at the end of the message, to default I use \0 (null character)</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">		ResponseContainer rs = e220ttl.receiveMessageUntil();
                // You can specify a custom delimiter also
		// ResponseContainer rs = e220ttl.receiveMessageUntil('|');

		String message = rs.data;

		Serial.println(rs.status.getResponseDescription());
		Serial.println(message);
</pre></div>


<p>This version of the device support RSSI also. To read that parameter (if you specify in the configuration that you want to send also that), you can use</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">	    ResponseContainer rc = e220ttl.receiveMessageRSSI();
		String message = rs.data;

		Serial.println(rs.status.getResponseDescription());
		Serial.println(message);
        Serial.print("RSSI: "); Serial.println(rc.rssi, DEC);
</pre></div>


<h2>ResponseStructContainer </h2>



<p>The  <code>ResponseStructContainer</code> is the more “complex” container. I use this to manage structures, It has the same entry points of ResponseContainer, but data is a void pointer to manage complex structure.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">	ResponseStructContainer c;
	c = e220ttl.getConfiguration();
	// It's important get configuration pointer before all other operation
	Configuration configuration = *(Configuration*) c.data;
	Serial.println(c.status.getResponseDescription());
	Serial.println(c.status.code);
    c.close();
</pre></div>


<p>If you receive a structured message with RSSI, you can use</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">		ResponseStructContainer rsc = e220ttl.receiveMessageRSSI(sizeof(Message));
		Serial.println(rsc.status.getResponseDescription());
		struct Message message = *(Message*) rsc.data;
		Serial.println(message.type);
		Serial.println(message.message);
		Serial.println(*(float*)(message.temperature));
		Serial.print("RSSI: "); Serial.println(rsc.rssi, DEC);
        rsc.close();
</pre></div>


<p class="has-very-dark-gray-color has-luminous-vivid-orange-background-color has-text-color has-background">Every time you use a <code>ResponseStructContainer</code> you must close It with <code>close()</code></p>



<h1>getConfiguration and setConfiguration</h1>



<p>The first method is getConfiguration, and you can use It to retrieve all data stored on the device.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">		ResponseStructContainer getConfiguration();
</pre></div>


<p>Here is a usage example.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">	ResponseStructContainer c;
	c = e32ttl.getConfiguration();
	// It's important get configuration pointer before all other operation
	Configuration configuration = *(Configuration*) c.data;
	Serial.println(c.status.getResponseDescription());
	Serial.println(c.status.code);
    Serial.println(configuration.SPED.getUARTBaudRate());
    c.close();
</pre></div>


<p>Structure of configuration have all data of settings, and I add a series of functions to get all description of single data.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">	configuration.ADDL = 0x03;  // First part of address
	configuration.ADDH = 0x00; // Second part

	configuration.CHAN = 23; // Communication channel

	configuration.SPED.uartBaudRate = UART_BPS_9600; // Serial baud rate
	configuration.SPED.airDataRate = AIR_DATA_RATE_010_24; // Air baud rate
	configuration.SPED.uartParity = MODE_00_8N1; // Parity bit

	configuration.OPTION.subPacketSetting = SPS_200_00; // Packet size
	configuration.OPTION.RSSIAmbientNoise = RSSI_AMBIENT_NOISE_DISABLED; // Need to send special command
	configuration.OPTION.transmissionPower = POWER_22; // Device power

	configuration.TRANSMISSION_MODE.enableRSSI = RSSI_DISABLED; // Enable RSSI info
	configuration.TRANSMISSION_MODE.fixedTransmission = FT_TRANSPARENT_TRANSMISSION; // Enable repeater mode
	configuration.TRANSMISSION_MODE.enableLBT = LBT_DISABLED; // Check interference
	configuration.TRANSMISSION_MODE.WORPeriod = WOR_2000_011; // WOR timing
</pre></div>


<p>You have the equivalent function for all attributes to get all descriptions:</p><div class="code-block code-block-2 amp-wp-d1954fa" data-amp-original-style="margin: 8px 0; clear: both;">
</div>



<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">void printParameters(struct Configuration configuration) {
	Serial.println("----------------------------------------");

	Serial.print(F("HEAD : "));  Serial.print(configuration.COMMAND, HEX);Serial.print(" ");Serial.print(configuration.STARTING_ADDRESS, HEX);Serial.print(" ");Serial.println(configuration.LENGHT, HEX);
	Serial.println(F(" "));
	Serial.print(F("AddH : "));  Serial.println(configuration.ADDH, HEX);
	Serial.print(F("AddL : "));  Serial.println(configuration.ADDL, HEX);
	Serial.println(F(" "));
	Serial.print(F("Chan : "));  Serial.print(configuration.CHAN, DEC); Serial.print(" -&gt; "); Serial.println(configuration.getChannelDescription());
	Serial.println(F(" "));
	Serial.print(F("SpeedParityBit     : "));  Serial.print(configuration.SPED.uartParity, BIN);Serial.print(" -&gt; "); Serial.println(configuration.SPED.getUARTParityDescription());
	Serial.print(F("SpeedUARTDatte     : "));  Serial.print(configuration.SPED.uartBaudRate, BIN);Serial.print(" -&gt; "); Serial.println(configuration.SPED.getUARTBaudRateDescription());
	Serial.print(F("SpeedAirDataRate   : "));  Serial.print(configuration.SPED.airDataRate, BIN);Serial.print(" -&gt; "); Serial.println(configuration.SPED.getAirDataRateDescription());
	Serial.println(F(" "));
	Serial.print(F("OptionSubPacketSett: "));  Serial.print(configuration.OPTION.subPacketSetting, BIN);Serial.print(" -&gt; "); Serial.println(configuration.OPTION.getSubPacketSetting());
	Serial.print(F("OptionTranPower    : "));  Serial.print(configuration.OPTION.transmissionPower, BIN);Serial.print(" -&gt; "); Serial.println(configuration.OPTION.getTransmissionPowerDescription());
	Serial.print(F("OptionRSSIAmbientNo: "));  Serial.print(configuration.OPTION.RSSIAmbientNoise, BIN);Serial.print(" -&gt; "); Serial.println(configuration.OPTION.getRSSIAmbientNoiseEnable());
	Serial.println(F(" "));
	Serial.print(F("TransModeWORPeriod : "));  Serial.print(configuration.TRANSMISSION_MODE.WORPeriod, BIN);Serial.print(" -&gt; "); Serial.println(configuration.TRANSMISSION_MODE.getWORPeriodByParamsDescription());
	Serial.print(F("TransModeEnableLBT : "));  Serial.print(configuration.TRANSMISSION_MODE.enableLBT, BIN);Serial.print(" -&gt; "); Serial.println(configuration.TRANSMISSION_MODE.getLBTEnableByteDescription());
	Serial.print(F("TransModeEnableRSSI: "));  Serial.print(configuration.TRANSMISSION_MODE.enableRSSI, BIN);Serial.print(" -&gt; "); Serial.println(configuration.TRANSMISSION_MODE.getRSSIEnableByteDescription());
	Serial.print(F("TransModeFixedTrans: "));  Serial.print(configuration.TRANSMISSION_MODE.fixedTransmission, BIN);Serial.print(" -&gt; "); Serial.println(configuration.TRANSMISSION_MODE.getFixedTransmissionDescription());


	Serial.println("----------------------------------------");
}

</pre></div>


<p>In the same way, setConfiguration wants a configuration structure, so I think the better way to manage configuration is to retrieve the current one, apply the only change you need and set It again.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">		ResponseStatus setConfiguration(Configuration configuration, PROGRAM_COMMAND saveType = WRITE_CFG_PWR_DWN_LOSE);
</pre></div>


<p><code>configuration </code>is the structure previously shown, <code>saveType </code>permit you to choose if the change becomes permanent or only for the current session.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; highlight: [23]; title: ; notranslate" title="">	ResponseStructContainer c;
	c = e32ttl100.getConfiguration();
	// It's important get configuration pointer before all other operation
	Configuration configuration = *(Configuration*) c.data;
	Serial.println(c.status.getResponseDescription());
	Serial.println(c.status.code);

	printParameters(configuration);
	configuration.ADDL = 0x03;  // First part of address
	configuration.ADDH = 0x00; // Second part

	configuration.CHAN = 23; // Communication channel

	configuration.SPED.uartBaudRate = UART_BPS_9600; // Serial baud rate
	configuration.SPED.airDataRate = AIR_DATA_RATE_010_24; // Air baud rate
	configuration.SPED.uartParity = MODE_00_8N1; // Parity bit

	configuration.OPTION.subPacketSetting = SPS_200_00; // Packet size
	configuration.OPTION.RSSIAmbientNoise = RSSI_AMBIENT_NOISE_DISABLED; // Need to send special command
	configuration.OPTION.transmissionPower = POWER_22; // Device power

	configuration.TRANSMISSION_MODE.enableRSSI = RSSI_DISABLED; // Enable RSSI info
	configuration.TRANSMISSION_MODE.fixedTransmission = FT_TRANSPARENT_TRANSMISSION; // Enable repeater mode
	configuration.TRANSMISSION_MODE.enableLBT = LBT_DISABLED; // Check interference
	configuration.TRANSMISSION_MODE.WORPeriod = WOR_2000_011; // WOR timing

	// Set configuration changed and set to not hold the configuration
	ResponseStatus rs = e32ttl100.setConfiguration(configuration, WRITE_CFG_PWR_DWN_LOSE);
	Serial.println(rs.getResponseDescription());
	Serial.println(rs.code);
	printParameters(configuration);
    c.close()
</pre></div>


<p> The parameters are all managed as constant: </p>



<h2>Basic configuration option</h2>



<figure class="wp-block-table mischianti-table-left"><table class="has-electric-grass-gradient-background has-background"><thead><tr><th>Name</th><th>Description</th><th>Address</th></tr></thead><tbody><tr><td>ADDH</td><td>High address byte of the module (the default 00H)</td><td>00H</td></tr><tr><td>ADDL</td><td>Low address byte of the module (the default 00H)</td><td>01H</td></tr><tr><td>SPED</td><td>Information about data rate parity bit and Air data rate</td><td>02H</td></tr><tr><td>OPTION</td><td> Type of transmission, packet size, allow the special message </td><td>03H </td></tr><tr><td>CHAN</td><td>Communication channel（410M + CHAN*1M）, default 17H (433MHz),&nbsp;<strong>valid only for 433MHz device</strong>&nbsp;check below to check the correct frequency of your device</td><td>04H</td></tr><tr><td>OPTION</td><td>Type of transmission, packet size, allow the special message</td><td>05H</td></tr><tr><td>TRANSMISSION_MODE</td><td>A lot of parameters that specify the transmission modality</td><td>06H</td></tr><tr><td>CRYPT</td><td>Encryption to avoid interception</td><td>07H</td></tr></tbody></table></figure>



<h3>SPED detail</h3>



<p>UART Parity bit: <em>UART mode can be different between communication parties</em></p>



<figure class="wp-block-table mischianti-table-left"><table class="has-electric-grass-gradient-background has-background"><thead><tr><th>UART parity bit</th><th>Constant value</th></tr></thead><tbody><tr><td>8N1 (default)</td><td>MODE_00_8N1</td></tr><tr><td>8O1</td><td>MODE_01_8O1</td></tr><tr><td>8E1</td><td>MODE_10_8E1</td></tr><tr><td>8N1 (equal to 00)</td><td>MODE_11_8N1</td></tr></tbody></table></figure>



<p>UART baud rate: UART baud rate can be different between communication parties (but not reccomended). The UART baud rate has nothing to do with wireless transmission parameters &amp; won’t affect the wireless transmit/receive features.</p><div class="code-block code-block-10 ai-viewport-2 ai-viewport-3 amp-wp-a750a3a" data-amp-original-style="margin: 8px auto; text-align: center; clear: both;">
</div>
<div class="code-block code-block-9 ai-viewport-1 amp-wp-a750a3a" data-amp-original-style="margin: 8px auto; text-align: center; clear: both;">
</div>




<figure class="wp-block-table mischianti-table-left"><table class="has-electric-grass-gradient-background has-background"><thead><tr><th>TTL UART baud rate（bps）</th><th>Constant value</th></tr></thead><tbody><tr><td>1200</td><td>UART_BPS_1200</td></tr><tr><td>2400</td><td>UART_BPS_2400</td></tr><tr><td>4800</td><td>UART_BPS_4800</td></tr><tr><td>9600 (default)</td><td>UART_BPS_9600</td></tr><tr><td>19200</td><td>UART_BPS_19200</td></tr><tr><td>38400</td><td>UART_BPS_38400</td></tr><tr><td>57600</td><td>UART_BPS_57600</td></tr><tr><td>115200</td><td>UART_BPS_115200</td></tr></tbody></table></figure>



<p>Air data rate: The lower the air data rate, the longer the transmitting distance,      better anti-interference performance, and longer transmitting time; the air data rate must be constant for both communication parties.</p>



<figure class="wp-block-table mischianti-table-left"><table class="has-electric-grass-gradient-background has-background"><thead><tr><th> Air data rate（bps） </th><th> Constant value </th></tr></thead><tbody><tr><td>2.4k </td><td>AIR_DATA_RATE_000_24 </td></tr><tr><td>2.4k </td><td>AIR_DATA_RATE_001_24 </td></tr><tr><td>2.4k (default)</td><td>AIR_DATA_RATE_010_24</td></tr><tr><td>4.8k</td><td>AIR_DATA_RATE_011_48</td></tr><tr><td>9.6k</td><td>AIR_DATA_RATE_100_96</td></tr><tr><td>19.2k</td><td>AIR_DATA_RATE_101_192</td></tr><tr><td>38.4k</td><td>AIR_DATA_RATE_110_384</td></tr><tr><td>62.5k</td><td>AIR_DATA_RATE_111_625</td></tr></tbody></table></figure>



<h3>OPTION detail</h3>



<h4>Sub packet setting</h4>



<p>This is the max length of the packet.</p>



<p>When the data is smaller than the subpacket length, the serial output of the receiving end is an uninterrupted continuous output. The receiving end serial port will output the subpacket when the data is larger than the subpacket length.</p>



<figure class="wp-block-table mischianti-table-left"><table class="has-pale-ocean-gradient-background has-background"><thead><tr><th>Packet size</th><th> Constant value </th></tr></thead><tbody><tr><td>200bytes (default)</td><td>SPS_200_00</td></tr><tr><td>128bytes</td><td>SPS_128_01</td></tr><tr><td>64bytes</td><td>SPS_064_10</td></tr><tr><td>32bytes</td><td>SPS_032_11</td></tr></tbody></table></figure>



<h4>RSSI Ambient noise enable</h4>



<p>This command can enable/disable the management type of RSSI, and It’s essential to manage the remote configuration. Pay attention isn’t the RSSI parameter in the message.</p>



<p>When enabled, the C0, C1, C2, C3 commands can be sent in the transmitting mode or WOR transmitting mode to read the register. Register 0x00: Current ambient noise RSSI Register 0X01: RSSI when the data was received last time.</p>



<figure class="wp-block-table mischianti-table-left"><table class="has-pale-ocean-gradient-background has-background"><thead><tr><th>RSSI Ambient noise enable</th><th> Constant value </th></tr></thead><tbody><tr><td>Enable</td><td>RSSI_AMBIENT_NOISE_ENABLED</td></tr><tr><td>Disable (default)</td><td>RSSI_AMBIENT_NOISE_DISABLED</td></tr></tbody></table></figure>



<h4>Transmission power</h4>



<p>You can change this set of constants by applying a define like so:</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: cpp; title: ; notranslate" title="">#define E220_22 // default value without set 
</pre></div>


<p>Applicable for <strong>E220 with 22dBm as max power.</strong><br>Low power transmission is not recommended due to its low power supply efficiency.</p>



<figure class="wp-block-table mischianti-table-left"><table class="has-pale-ocean-gradient-background has-background"><thead><tr><th> Transmission power (approximation) </th><th> Constant value </th></tr></thead><tbody><tr><td>22dBm (default)</td><td>POWER_22</td></tr><tr><td>17dBm</td><td>POWER_17</td></tr><tr><td>13dBm</td><td>POWER_13</td></tr><tr><td>10dBm</td><td>POWER_10</td></tr></tbody></table></figure>



<p>Applicable for <strong>E220 with 30dBm as max power.</strong><br>Low power transmission is not recommended due to its low power supply efficiency.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: cpp; title: ; notranslate" title="">#define E220_30
</pre></div>


<figure class="wp-block-table mischianti-table-left"><table class="has-pale-ocean-gradient-background has-background"><thead><tr><th> Transmission power (approximation) </th><th> Constant value </th></tr></thead><tbody><tr><td>30dBm (default)</td><td>POWER_30</td></tr><tr><td>27dBm</td><td>POWER_27</td></tr><tr><td>24dBm</td><td>POWER_24</td></tr><tr><td>21dBm</td><td>POWER_21</td></tr></tbody></table></figure>



<p>You can configure Channel frequency also with this define:</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: cpp; title: ; notranslate" title="">// One of 
#define FREQUENCY_433 
#define FREQUENCY_170
#define FREQUENCY_470
#define FREQUENCY_868
#define FREQUENCY_915
</pre></div>


<h3>TRANSMISSION_MODE Detail</h3>



<h4>Enable RSSI</h4>



<p>When enabled, the module receives wireless data, and it will follow an RSSI strength byte after output via the serial port TXD</p>



<figure class="wp-block-table mischianti-table-left"><table class="has-blush-light-purple-gradient-background has-background"><thead><tr><th> Enable RSSI </th><th> Constant value </th></tr></thead><tbody><tr><td>Enable</td><td>RSSI_ENABLED</td></tr><tr><td>Disable (default)</td><td>RSSI_DISABLED</td></tr></tbody></table></figure>



<h4>Transmission type</h4>



<p>Transmission mode: The first three bytes of each user’s data frame can be used as high/low address and channel in fixed transmission mode.   The module changes its address and channel when transmitted. And it will revert to the original setting after completing the process.</p>



<figure class="wp-block-table mischianti-table-left"><table class="has-blush-light-purple-gradient-background has-background"><thead><tr><th>Fixed transmission enabling bit</th><th> Constant value </th></tr></thead><tbody><tr><td>Fixed transmission mode</td><td>FT_FIXED_TRANSMISSION</td></tr><tr><td>Transparent transmission mode (default)</td><td>FT_TRANSPARENT_TRANSMISSION</td></tr></tbody></table></figure>



<h4>Monitor data before transmission</h4>



<p>When enabled, wireless data will be monitored before it is transmitted, avoiding interference to a certain extent, but may cause data delay.</p>



<figure class="wp-block-table mischianti-table-left"><table class="has-blush-light-purple-gradient-background has-background"><thead><tr><th> LBT enable byte </th><th> Constant value </th></tr></thead><tbody><tr><td>Enable</td><td>LBT_ENABLED</td></tr><tr><td>Disable (default)</td><td>LBT_DISABLED</td></tr></tbody></table></figure>



<div class="wp-block-image"><img src="https://www.mischianti.org/wp-content/uploads/2020/07/Ebyte-LoRa-E22-device-for-Arduino-esp32-or-esp8266-carrier-sense.jpg"/></div>



<h4>WOR cycle</h4>



<p>If WOR is transmitting: after the WOR receiver receives the wireless data and outputs it through the serial port, it will wait for 1000ms before entering the WOR again. Users can input the serial port data and return it via wireless during this period. Each serial byte will be refreshed for 1000ms. Users must transmit the first byte within 1000ms.</p>



<ul><li>Period T = (1 + WOR) * 500ms, maximum 4000ms, minimum 500ms</li><li>The longer the WOR monitoring interval period, the lower the average power consumption, but the greater the data delay</li><li><strong>Both the transmitter and the receiver must be the same (very important).</strong></li></ul>



<figure class="wp-block-table mischianti-table-left"><table class="has-blush-light-purple-gradient-background has-background"><thead><tr><th>Wireless wake-up time</th><th> Constant value </th></tr></thead><tbody><tr><td>500ms</td><td>WAKE_UP_500</td></tr><tr><td>1000ms</td><td>WAKE_UP_1000</td></tr><tr><td>1500ms</td><td>WAKE_UP_1500</td></tr><tr><td>2000ms (default)</td><td>WAKE_UP_2000</td></tr><tr><td>2500ms</td><td>WAKE_UP_2500</td></tr><tr><td>3000ms</td><td>WAKE_UP_3000</td></tr><tr><td>3500ms</td><td>WAKE_UP_3500</td></tr><tr><td>4000ms</td><td>WAKE_UP_4000</td></tr></tbody></table></figure>



<h1>Check buffer</h1>



<p>First, we must introduce a simple but practical method to check if something is in the receiving buffer.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">int available();
</pre></div>


<p>It’s simple to return how many bytes you have in the current stream.</p><div class="code-block code-block-2 amp-wp-d1954fa" data-amp-original-style="margin: 8px 0; clear: both;">
</div>




<h1>Send receive messages</h1>



<h2>Normal transmission mode</h2>



<p>Normal/Transparent transmission mode sends messages to all devices with the same address and channel.</p>



<div class="wp-block-image"><img src="https://www.mischianti.org/wp-content/uploads/2019/10/LoRa_E32_transmittingScenarios.jpg"/></div>



<p>There are a lot of methods to send/receive messages, and we are going to explain in detail:</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">        ResponseStatus sendMessage(const String message);
        ResponseContainer receiveMessage();
</pre></div>


<p>The first method is sendMessage and is used to send a String to a device in <strong>Normal mode</strong>.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">	ResponseStatus rs = e220ttl.sendMessage("Prova");
	Serial.println(rs.getResponseDescription());
</pre></div>


<p>The other device simply does on the loop.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">       if (e220ttl.available()  &gt; 1){
		ResponseContainer rs = e220ttl.receiveMessage();
		String message = rs.data; // First ever get the data
		Serial.println(rs.status.getResponseDescription());
		Serial.println(message);
	}
</pre></div>


<p class="has-luminous-vivid-orange-background-color has-background">Pay attention if you receive multiple messages in the buffer and don’t want to read them all at one time. You must use <code>ResponseContainer rs = e220ttl.receiveMessageUntil();</code> with a delimiter put on the end of sending a message.</p><div class="code-block code-block-10 ai-viewport-2 ai-viewport-3 amp-wp-a750a3a" data-amp-original-style="margin: 8px auto; text-align: center; clear: both;">
</div>
<div class="code-block code-block-9 ai-viewport-1 amp-wp-a750a3a" data-amp-original-style="margin: 8px auto; text-align: center; clear: both;">
</div>




<p>If you enabled the RSSI, you must use <code>receiveMessageRSSI</code>.</p>



<h3>Manage structure</h3>



<p>If you want to send a complex structure, you can use this method</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">        ResponseStatus sendMessage(const void *message, const uint8_t size);
        ResponseStructContainer receiveMessage(const uint8_t size);
</pre></div>


<p>It’s used to send structure, for example:</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">	struct Messaggione {
		char type[5];
		char message[8];
		bool mitico;
	};
        struct Messaggione messaggione = {"TEMP", "Peple", true};
        ResponseStatus rs = e220ttl.sendMessage(&amp;messaggione, sizeof(Messaggione));
	Serial.println(rs.getResponseDescription());
</pre></div>


<p>and the other side you can receive the message so</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">		ResponseStructContainer rsc = e22ttl.receiveMessage(sizeof(Messaggione));
		struct Messaggione messaggione = *(Messaggione*) rsc.data;
		Serial.println(messaggione.message);
		Serial.println(messaggione.mitico);
        rsc.close();
</pre></div>


<p>If you enabled the RSSI, you must use <code>receiveMessageRSSI</code>.</p>



<h3>Read partial structure</h3>



<p>If you want to read the first part of the message to manage more types of structure, you can use this method.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">ResponseContainer receiveInitialMessage(const uint8_t size);
</pre></div>


<p>I create It to receive a string with type or other to identify the structure to load.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">		struct Messaggione { // Partial structure without type
			char message[8];
			bool mitico;
		};

		char type[5]; // first part of structure
		ResponseContainer rs = e220ttl.receiveInitialMessage(sizeof(type));
                // Put string in a char array (not needed)
		memcpy ( type, rs.data.c_str(), sizeof(type) );

		Serial.println("READ TYPE: ");
		Serial.println(rs.status.getResponseDescription());
		Serial.println(type);

                // Read the rest of structure
		ResponseStructContainer rsc = e220ttl.receiveMessage(sizeof(Messaggione));
		struct Messaggione messaggione = *(Messaggione*) rsc.data;
        rsc.close();
</pre></div>


<h2>Fixed mode instead of normal mode</h2>



<p>Similarly, I create a set of methods to use with the fixed transmission.</p>



<h3>Fixed transmission</h3>



<p><strong>You need to change only the sending method</strong> because the destination device doesn’t<strong> receive the preamble with Address and Channel when setting the fixed mode.</strong></p>



<p>So for the String message, you have</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">        ResponseStatus sendFixedMessage(byte ADDH, byte ADDL, byte CHAN, const String message);
        ResponseStatus sendBroadcastFixedMessage(byte CHAN, const String message);
</pre></div>


<p>and for the structure, you have</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">        ResponseStatus sendFixedMessage(byte ADDH, byte ADDL, byte CHAN, const void *message, const uint8_t size);
        ResponseStatus sendBroadcastFixedMessage(byte CHAN, const void *message, const uint8_t size );
</pre></div>


<p>Here is a simple example</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">	ResponseStatus rs = e220ttl.sendFixedMessage(0, 0, 0x17, &amp;messaggione, sizeof(Messaggione));
//	ResponseStatus rs = e220ttl.sendFixedMessage(0, 0, 0x17, "Ciao");
</pre></div>


<p>Fixed transmission have more scenarios</p>



<div class="wp-block-image"><img src="https://www.mischianti.org/wp-content/uploads/2019/10/LoRa_E32_transmittingScenarios.jpg"/></div>



<p>If you send to a specific device (second scenario Fixed transmission), you must add ADDL, ADDH, and CHAN to identify It directly.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">ResponseStatus rs = e220ttl.sendFixedMessage(2, 2, 0x17, "Message to a device");
</pre></div>


<p>If you want to send a message to all devices in a specified Channel, you can use this method.</p><div class="code-block code-block-2 amp-wp-d1954fa" data-amp-original-style="margin: 8px 0; clear: both;">
</div>



<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">ResponseStatus rs = e220ttl.sendBroadcastFixedMessage(0x17, "Message to a devices of a channel");
</pre></div>


<p>If you wish to receive all broadcast messages in the network, you must set your <code>ADDH </code>and <code>ADDL </code>with <code>BROADCAST_ADDRESS</code>.</p>


<div class="wp-block-syntaxhighlighter-code "><pre class="brush: arduino; title: ; notranslate" title="">        ResponseStructContainer c;
	c = e220ttl.getConfiguration();
	// It's important get configuration pointer before all other operation
	Configuration configuration = *(Configuration*) c.data;
	Serial.println(c.status.getResponseDescription());
	Serial.println(c.status.code);

	printParameters(configuration);
	configuration.ADDL = BROADCAST_ADDRESS;
	configuration.ADDH = BROADCAST_ADDRESS;

	// Set configuration changed and set to not hold the configuration
	ResponseStatus rs = e32ttl100.setConfiguration(configuration, WRITE_CFG_PWR_DWN_LOSE);
	Serial.println(rs.getResponseDescription());
	Serial.println(rs.code);
	printParameters(configuration);
        c.close();
</pre></div>


<h1>Thanks</h1>



<p>Now you have all information to do your work, but I think It’s important to show some real examples to understand better all the possibilities.</p>



<ol><li>Ebyte LoRa E220 device for Arduino, esp32 or esp8266: settings and basic usage</li><li>Ebyte LoRa E220 device for Arduino, esp32 or esp8266: library</li><li>Ebyte LoRa E220 device for Arduino, esp32 or esp8266: configuration</li><li>Ebyte LoRa E220 device for Arduino, esp32 or esp8266: fixed transmission, broadcast, monitor, and RSSI</li><li>Ebyte LoRa E220 device for Arduino, esp32 or esp8266: power saving and sending structured data</li><li><span data-amp-original-style="color: initial;" class="amp-wp-2ca27fe">Ebyte LoRa E220 device for Arduino, esp32 or esp8266: WOR microcontroller and Arduino shield</span></li><li>Ebyte LoRa E220 device for Arduino, esp32 or esp8266: WOR microcontroller and WeMos D1 shield</li><li>Ebyte LoRa E220 device for Arduino, esp32 or esp8266: WOR microcontroller and esp32 dev v1 shield</li></ol>



<p><a href="https://github.com/xreef/EByte_LoRa_E220_Series_Library" data-type="URL" data-id="https://github.com/xreef/EByte_LoRa_E220_Series_Library" target="_blank" rel="noreferrer noopener">Github library</a></p>



<ul><li><a href="https://www.pcbway.com/project/shareproject/LoRa_E32_Series_device_Arduino_shield.html">Mischianti Arduino LoRa shield (Open source)</a></li><li><a href="https://www.pcbway.com/project/shareproject/LoRa_E32_Series_device_WeMos_D1_mini_shield_RF_8km_range.html">Mischianti WeMos LoRa shield (Open source)</a></li><li><a rel="noreferrer noopener" href="https://www.pcbway.com/project/shareproject/LoRa_ESP32_DEV_KIT_v1_shield_for_EByte_E32_E22__RF_8km_12km_range.html?from=mischianti05" target="_blank">Mischianti ESP32 DOIT DEV KIT v1 shield (Open source)</a></li></ul>


      

<div class="mischianti-forum-button-container">
  	<a class="mischianti-forum-button" href="https://www.mischianti.org/forums/forum/mischiantis-libraries/ebyte-lora-e220-uart-devices-llcc68/" target="_blank">Support Forum</a>
</div>
	</div>