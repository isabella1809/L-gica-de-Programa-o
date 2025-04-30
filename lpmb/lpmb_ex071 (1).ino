//Faça um programa que receba o nome, cargo e salário de um funcionario. 
//Calcule o salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

//Declaração de variáveis
String nome = "";
String cargo = "";

float salario = 0.0;
float novoSalario = 0.0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("qual e o seu nome ?");
  while(!Serial.available() );
  nome = Serial.readString();
  
  Serial.println("digite o seu cargo ?");
  while(!Serial.available() );
 cargo= Serial.readString();
  
  Serial.println("digite seu Salario ?");
  while(!Serial.available() );
  salario = Serial.parseFloat();
  
  //processamento
  novoSalario = salario * (10.0 / 100.0);
  
 
  //saída
  Serial.println("Nome informado: "+ nome);
  Serial.println("cargo informado:" + cargo);
  Serial.println("seu novo salario e: " + String( novoSalario));
  
  delay(1000);
}