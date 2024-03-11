//Declaração de salário
float sal_atual, novo_sal;

void setup() {
  //Iniciar a comunicação no monitor serial
  Serial.begin(9600);

  delay(1000);

}

void loop() {
  // Inserir o salário
  Serial.println("Digite o salario do funcionario: ");
  while(!Serial.available()); // Espera os dados
  sal_atual = Serial.parseFloat(); 
  
  //Calcule o aumento de 25%
  float aumento = sal_atual* 0.25;
  
  //Calcule o novo salário
  float novo_sal = sal_atual + aumento;
  Serial.print("O novo salario e:  ");
  Serial.println(novo_sal);
  
  delay(1000);

}
