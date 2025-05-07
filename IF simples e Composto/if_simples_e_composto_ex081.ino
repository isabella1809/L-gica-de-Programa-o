//Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
//funcionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
//Ao final exiba o nome, o cargo e o salário desse funcionário.

//variáveis 
String nome = "";
String cargo = "";
float salario;

 void setup() 
{
   Serial.begin(9600);
}

 void loop()
{ 
  // entrada
  
   Serial.println("digite o nome do funcionario");
   while(!Serial.available());
    nome = Serial.readString();
   
    Serial.println("digite o cargo do funcionario");
   while(!Serial.available());
   cargo = Serial.readString();
   
    Serial.println("digite o salario do funcionario");
   while(!Serial.available());
   salario = Serial.parseFloat();
   
   // processamento
    if(salario < 1000){
     salario = salario + (salario * 0.10);
    }
      //saída
      Serial.println("Nome informado: "+ nome);
  Serial.println("cargo informado:" + cargo);
  Serial.println("seu novo salario e: " + String(salario));
     
   delay(1000);
}     
      

