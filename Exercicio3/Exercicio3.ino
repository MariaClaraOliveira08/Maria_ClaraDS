//Declaração de salário
float sal, sal_rec, grat, imp;

void setup() {
  //Iniciar a comunicação no monitor serial
  Serial.begin(9600);

}

void loop() {
  //Inserir o salário 
  Serial.println("Digite o salario:  ");
  while(!Serial.available()); //Esperar os dados
  float sal = Serial.parseFloat();
  
  //Gratificação, salario a receber e imposto
  float grat = sal * 5/100;
  float imp = sal * 7/100;
  float sal_rec = sal + grat - imp;
    
  // Mostre o salário a receber
    Serial.print("O salario a receber é: R$  ");
    Serial.println(sal_rec);
    delay(1000);

}
