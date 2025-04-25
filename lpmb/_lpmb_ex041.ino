//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso / (altura * altura)
//.

//Declaração de variáveis
String nome = "";
float altura = 0;
float peso = 0;
float imc = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("qual e o seu nome ?");//mostra uma mensagem na tela (via serial)
  while(!Serial.available() );//espera o usuário digitar e dar um <Entrer>
  nome = Serial.readString();//guarda o texto que o usuário digitou na variável nome
  
   Serial.println("digite sua idade em altura ");//mostra uma mensagem na tela (via serial)
  while(!Serial.available() );//espera o usuário digitar e dar um <Entrer>
  altura= Serial.parseFloat();//transforma a idade digitada em número
  
  Serial.println("digite sua idade em peso ");//mostra uma mensagem na tela (via serial)
  while(!Serial.available() );//espera o usuário digitar e dar um <Entrer>
  peso= Serial.parseFloat();//transforma a idade digitada em número
  
  //processamento
 imc = peso / (altura * altura);
  
 
  //saída
  Serial.println("seu imc e: " + String(imc));
  
  
  delay(1000);
}
