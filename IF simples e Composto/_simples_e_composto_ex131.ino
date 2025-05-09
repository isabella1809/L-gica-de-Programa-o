/*Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.
*/

void setup()
{
Serial.begin(9600);
  Serial.println("informe um numero par");
  while(!Serial.available()){}//espera o usuário dar enter
  int numero = Serial.parseInt();//guarda o número digitado pelo usúario direto na variavel
  
  if(numero % 2 == 0){// verifica se o número é par 
    Serial.println("o numero digitado eh par:"+ String(numero));
  }
 Serial.println();//escreve uma linha vazia
 Serial.println("obrigado por utilizar o programa par");
}

void loop()
{
Serial.println("ei, delique o arduino!");
  Serial.println("nao tenho mas nada para fazer, apenas gastando energia !!");
   Serial.println();
  delay(2500);
}