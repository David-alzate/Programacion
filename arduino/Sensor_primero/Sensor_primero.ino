float tempc;
int pinLM35 = 0;
void setup () {
Serial.begin (9600);

}

void loop () {
  tempc = analogRead (pinLM35);
  tempc = (5.0*tempc*100.0)/1023.0;

  Serial.print(tempc);
  Serial.print ("\n");
  delay (1000);

}
