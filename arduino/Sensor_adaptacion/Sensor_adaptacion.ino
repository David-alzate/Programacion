float tempc;
const int pinLM35 = 0;
float sinVal;
int toneVal;
int led1 = 2;
int led2 = 3;

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  tempc = analogRead(pinLM35);
  float voltage = (tempc / 1024.0) * 5.0;
  float temperature = (voltage - 0.5) * 100;
  Serial.println(temperature);
  delay(180);
 

  if (temperature > 30) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(40);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(20);
     
    
    for (int x = 0; x < 180; x++) {
      // convertimos grados en radianes para luego obtener el valor.
      sinVal = (sin(x * (3.1412 / 180)));
      // generar una frecuencia a partir del valor sin
      toneVal = 2000 + (int(sinVal * 1000));
      tone(9, toneVal);
      delay(1);
      
      
    }
  } else {
    noTone(9);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
}
