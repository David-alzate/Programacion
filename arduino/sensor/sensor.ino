float tempc;
const float baselineTemp = 20;
float pinlM35 = 0;
void setup () {
Serial.begin (9600) ;

for(float pinNumber = 2; pinNumber < 5; pinNumber++){
 pinMode(pinNumber, OUTPUT);
 digitalWrite(pinNumber, LOW);
}
}


void loop () {
float tempc = analogRead (pinlM35);

Serial.print("Sensor Value: ");
Serial.print(tempc);

  
float voltage = (tempc/1024.0) * 5.0;
Serial.print(", Volts: ");
Serial.print(voltage);
Serial.print(", degrees C: ");

float temperature = (voltage - 0.5) * 100;
Serial.println (temperature);


if(temperature < baselineTemp){

digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
}

else if(temperature >= baselineTemp+2 && temperature < baselineTemp+4){
 digitalWrite(2, HIGH);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
}
else if(temperature >= baselineTemp+4 && temperature < baselineTemp+6){
 digitalWrite(2, HIGH);
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
}
else if(temperature >= baselineTemp+6){
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
}
delay(500);
}

