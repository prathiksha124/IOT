const int tempPin = A1; 
const int soilMoisturePin = A2; 
const int lightSensorPin = A4; 
const int buzzer = 7; 
const int led = 8; 
void setup() { 
  Serial.begin(9600); 
  pinMode(buzzer, OUTPUT); 
  pinMode(led, OUTPUT); 
} 
void loop() { 
  float temp = analogRead(tempPin) * (5.0 / 1023.0) * 100; 
  Serial.print("Temperature: "); 
  Serial.print(temp); 
  Serial.println(" C"); 
  int soilMoisture = analogRead(soilMoisturePin); 
  Serial.print("Soil Moisture: "); 
  Serial.println(soilMoisture); 
  int lightLevel = analogRead(lightSensorPin); 
  Serial.print("Light Level: "); 
  Serial.println(lightLevel); 
  if (temp > 30.0) {  
    digitalWrite(buzzer, HIGH);  
  } else { 
    digitalWrite(buzzer, LOW);  
  } 
 
  if (soilMoisture < 300) {  
    digitalWrite(led, HIGH; 
  } else { 
    digitalWrite(led, LOW);  
  } 
  delay(1000);  
} 