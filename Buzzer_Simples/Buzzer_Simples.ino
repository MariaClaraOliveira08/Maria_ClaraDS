//Constante para o pino da Buzzer
#define pinoBuzzer 2

//Constante do led
#define pinoLedVermelho 3

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);

  delay(1000);  // parada estratégica
}

void loop() {
  tone(pinoBuzzer, 523);// Nota musical dó
  digitalWrite(pinoLedVermelho, HIGH);
  delay(1000);
  noTone(pinoBuzzer);//desliga a buzzer
  digitalWrite(pinoLedVermelho, LOW); //apaga o LED
  delay(1000);

}
