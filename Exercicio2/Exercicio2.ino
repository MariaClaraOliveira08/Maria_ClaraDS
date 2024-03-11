// Declaração de salário
float sal_atual, novo_sal, percentual, aumento;

void setup()
{
  //Iniciar a comunicação no monitor serial
  Serial.begin(9600);
  while(!Serial); // Aguarda entrada
}

void loop()
{
  //Inserir o salário e o percentual de aumento
  Serial.println("Digite o salário:  ");
  while(!Serial.available()); //Espera os dados
  float sal_atual = Serial.parseFloat(); //Leia o valor do float
  
  Serial.println("Digite o percentual de aumento: ");
  while(!Serial.available()); //Espera os dados
  float percentual_aumento = Serial.parseFloat(); //Leia o valor do float
  
   //Calcule o aumento e o novo salário
  float aumento = sal_atual * (percentual_aumento/100);
  float novo_sal = sal_atual + aumento; 
  
    //Cálculo do novo salário
  Serial.print("O aumento e de: R$  ");
  Serial.println(aumento);
  Serial.print("O novo salário e: R$  ");
  Serial.println(novo_sal);
  delay(1000);
}

