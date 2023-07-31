#define trig 3 // Emisor de pulso o señal

#define echo 2 // Receptor "del eco" del pulso o señal

#define buzzer 9 //Zumbador

float sinVal;
int toneVal;
int alarmDuration = 0;


void setup() {
  // Sólo se activa una vez al iniciarse el programa. Definimos entradas y salidas

  pinMode(trig, OUTPUT); //Emisor

  pinMode(echo, INPUT); //Receptor

  pinMode(buzzer, OUTPUT); //Emisor

}

void loop() {
  // Bucle

  long duration, distance; //Establecemos duration y distance como variables numéricas extensas

  digitalWrite(trig, LOW); //Para tener un pulso limpio empezamos con 2 microsegundos en apagado

  delay(2);

  digitalWrite(trig, HIGH); //Mandamos un pulso de 5 microsegundos

  delay(5);

  digitalWrite(trig, LOW); //Apagamos

  duration = pulseIn(echo, HIGH); //Medimos el tiempo que la señal tarda en volver al sensor en microsegundos

  distance = (duration/2)*0.0343; //La distancia es el tiempo por la velocidad del sonido (343 m/s = 0.0343 cm/microseg)

  if (distance < 40) { //Si la distancia es menor de un metro y medio
    alarmDuration = 30;
  }
  
  if (alarmDuration > 0) { //Si la alarma debe seguir sonando
    for(int x=0; x<180; x++){
      // convertimos grados en radianes para luego obtener el valor.
      sinVal = (sin(x*(3.1412/180)));
      // generar una frecuencia a partir del valor sin
      toneVal = 2000+(int(sinVal*1000));
      tone(9, toneVal);
      delay(2); 
    }
    alarmDuration -= 2; //Restamos 2 milisegundos del tiempo de duración de la alarma
  } else { //Si no se detectó nada o se terminó la duración de la alarma
    noTone(buzzer); //no suena
  }
}
