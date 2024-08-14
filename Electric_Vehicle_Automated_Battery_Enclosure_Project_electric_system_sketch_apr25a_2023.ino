
#include <OneWire.h>
#include <DallasTemperature.h>

//Set up 


const int TEMP_THRESHOLD_UPPER = 35;
int pinTemp = 7;
const int relayPin = 4;

OneWire oneWire(pinTemp);
DallasTemperature sensors(&oneWire);

float temperature;




void setup() {
  Serial.begin(9600);
  //pinMode(7, OUTPUT);
  sensors.begin();
  // put your setup code here, to run once:
  pinMode(relayPin, OUTPUT);



}

void loop() {
  // put your main code here, to run repeatedly:
  sensors.requestTemperatures();
  temperature = sensors.getTempCByIndex(0);


  
  if (temperature > TEMP_THRESHOLD_UPPER){
    Serial.println("Pump is on ");
    digitalWrite(relayPin, LOW);
    delay(4000);
    Serial.println((String) temperature + " degrees Celsius");
  }

  else{
    Serial.println("Pump is off ");
    digitalWrite(relayPin, HIGH);
    delay(4000);
    Serial.println((String) temperature + " degrees Celsius");
  }

    

  





}


