//Declaração da constante que armazena o pino do push button//
#define pinoButton 8
#define ledvermelho 9

//Declaração da variável de estado do botão
bool status = false;

void setup() {
  //Definir a modalidade do pino//
  pinMode(pinoButton, INPUT);
  pinMode(ledvermelho,OUTPUT);
  Serial.begin(9600);

  delay(300); //parada estratégica

}

void loop() {
  //Lendo o pino digital através da constante
  //Serial.println(digitalRead(pinoButton));

  if(digitalRead(pinoButton) == 1 && status == false) { 
    Serial.println("led ligado"); 
    status = true;
    digitalWrite(ledvermelho, HIGH);
  } else if(digitalRead(pinoButton) == 1 && status == true); {
    Serial.println("led desligado");
    status = false;
    digitalWrite(ledvermelho, LOW);
  }

  
  delay(300); //parada estratégica para leitura
}
