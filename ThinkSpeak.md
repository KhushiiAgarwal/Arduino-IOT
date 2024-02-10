1. Include Wi-Fi and ThingSpeak directories. 
2. Installing Thingspeak. Goto Sketch---Include Library---Manage Libraries---Write in Library Manage ‘Thingspeak’---Install latest version 
3. Note that if already have wi-fi directory no need to install it again. 
4. Goto www.google.com. Googlr -thingspeak login---Sign-in 
5. Create account if you don’t have one. Use official/organization e-mail ID. Location [Country Name]. Your name etc--- Continue 
6. Goto Channels --- My Channels--- New Channel 
7. Write Channel name, description (not mandatory)---Create two fields. Field 1- temp in degrees Celsius. Field 2- temp in Fahrenheit. Save. 
8. Copy Channel ID and paste it in the code. long myChannelNumber = 1587542; 
9. Goto API keys. Copy API key (Write API Key) and paste it in the code. const char myWriteAPIKey[] = "OMVXC2R3UOKGBNV1"; 
10. Enter the wifi login and password in the code. [Line 11](docs/Traffic.ino). WiFi.begin("Login","Password");
11. Write code for reading data from LM35 temperature sensor [Code](docs/LM35.ino). ThingSpeak.begin(client); ------ Starts thingspeak  ThingSpeak.writeField (myChannelNumber, 1, tempc, myWriteAPIKey); ----- Displays temp in the field in thingspeak. 
12. Make hardware connections using node MCU and LM35, to sense and measure temperature.
13. Upload sketch. The data (temp) will be displayed in the serial monitor. Also it will be collected and uploaded on cloud and displayed in the two fields.
14. Observe the outputs. 
