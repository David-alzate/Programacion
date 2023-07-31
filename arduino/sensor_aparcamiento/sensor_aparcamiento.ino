#define echoPin 2 
#define trigPin 3 
#define buzzer 9

long duration; 
int distance; 
int delayVal;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; 

  if(distance < 36 && distance > 5){
    delayVal = map(distance, 6, 35, 20, 400);
    Serial.println(map(distance, 6, 35, 20, 400));
    digitalWrite(buzzer, HIGH);
    delay(delayVal);
    digitalWrite(buzzer, LOW);  
    delay(delayVal);
  }else if(distance < 6){
    digitalWrite(buzzer, HIGH);
  }else if(distance > 35){
    digitalWrite(buzzer, LOW);
  }   
}
