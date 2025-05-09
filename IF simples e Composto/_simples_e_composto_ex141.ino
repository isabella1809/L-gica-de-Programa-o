/*Faça um programa receba dois valores e imprima qual é o maior número
digitado
*/  
//variaveis 
float valor1 = 0;
float valor2 = 0;
void setup()
{
Serial.begin(9600);
}

void loop()
{
Serial.println("digite o primeiro valor");
while(!Serial.available());
valor1 = Serial.parseFloat();
  
  Serial.println("digite o segundo valor");
while(!Serial.available());
valor2 = Serial.parseFloat(); 
 
  Serial.println("primeiro :" +String(valor1));
  Serial.println("segundo :" +String(valor2));
  
  if(valor1 > valor2){
  Serial.println("o primeiro valor e o maior");
  } else{
  Serial.println("o segundo valor e o maior");
  }
  delay(1000);
}