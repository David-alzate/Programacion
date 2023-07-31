float tempc;
const int pinLM35 = 0;
const float baselineTemp = 70;

void setup() {
 // put your setup code here, to run once:
Serial.begin(9600); // open the serial port at 9600 baud

for(int pinNumber = 2; pinNumber < 5; pinNumber++){
 pinMode(pinNumber, OUTPUT);
 digitalWrite(pinNumber, LOW);
}
}

void loop() {
tempc = analogRead (pinLM35);
tempc = (5.0*tempc*100.0)/1023.0;

Serial.print(tempc);
Serial.print ("\n");
delay (1000);

if(tempc < baselineTemp){

digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
}

else if(tempc >= baselineTemp+2 && tempc < baselineTemp+4){
 digitalWrite(2, HIGH);
 digitalWrite(3, LOW); 
 digitalWrite(4, LOW);
}
else if(tempc >= baselineTemp+4 && tempc< baselineTemp+6){
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
}
else if(tempc >= baselineTemp+6){
 digitalWrite(2, HIGH);
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
}
delay(500);
}