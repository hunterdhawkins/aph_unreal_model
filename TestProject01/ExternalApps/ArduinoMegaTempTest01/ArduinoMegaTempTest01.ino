// #include <OneWire.h>
// #include <DallasTemperature.h>

// Temperature sensor data wire must be connected to Arduino digital pin 4:
const int ONE_WIRE_DIGITAL_BUS_PIN  = 4;
const int LED_OUT_PIN               = 13;

float temperatureValue = 0;

// Setup a OneWire library instance to communicate with any OneWire devices:
// OneWire oneWire( ONE_WIRE_DIGITAL_BUS_PIN );
// // Pass the oneWire reference to the Dallas Temperature sensor library:
// DallasTemperature sensors( &oneWire );



void setup()
{
  pinMode( LED_OUT_PIN , OUTPUT );
  // Initialize serial port and wait for port to open:
  Serial.begin( 9600 );
  // Wait forever for serial port to connect:
  // ( Needed for native USB port only )
  // while ( !Serial ) { delay( 1000 ); };
  // Initialize OneWire sensors:
  // sensors.begin();
};

void loop()
{
  // Turn the LED on and wait:
  digitalWrite( LED_OUT_PIN , HIGH );
  delay( 250 );
  
  // Read the temperature from the sensor:
  // sensors.requestTemperatures();
  // temperatureValue = sensors.getTempCByIndex( 0 ); 
  temperatureValue = temperatureValue + 1; 

  // Write to the serial port the value of the temperature sensor:  
  Serial.println( temperatureValue );  

  // Turn the LED off and wait:
  digitalWrite( LED_OUT_PIN , LOW );
  delay( 250 );
};
