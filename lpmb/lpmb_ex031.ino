//Faça um programa que receba um número e exiba o seu dobro.

// tipodedado nomedaVariável = valornicial;
int idade = 15.987;//declara/criar a variável idade e já inicia com valor 15



void setup()
{
  Serial.begin(9600);//inicia a serial 
  
}
void loop()
{
  Serial.println(idade);//imprime o valor da variável 15 
   idade = idade * 2;// 15 * 1 
  Serial.println( idade);//16
 
  
  delay(1000);
  
}