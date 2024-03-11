//Constante para o pino da Buzzer
#define pinoBuzzer 2

//Constante do led
#define pinoLedVermelho 3

//Constante do Botão
#define pinoButton 4

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoButton, INPUT);
  delay(1000);  // parada estratégica
}
 
void loop() {
    if (digitalRead(pinoButton) == 1) {
    Serial.println("led ligado");
    digitalWrite(pinoLedVermelho, HIGH);
    tone(pinoBuzzer, 523);  // Nota musical 

  } else if (digitalRead(pinoButton) == 0); 
    Serial.println("led desligado");
    digitalWrite(pinoLedVermelho, LOW);  //apaga o led
    noTone(pinoBuzzer); //desliga o buzzer
}


