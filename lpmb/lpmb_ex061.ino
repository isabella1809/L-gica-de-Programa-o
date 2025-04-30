//Faça um programa que receba a medida em polegadas e exiba esse número em centímetros.

//declaração de variaveis
float  polegadas= 0;
float centimetros = 0;


void setup()
{
  Serial.begin(9600);//inicia a serial 
  
}
void loop()
{
  
  //entrada
  Serial.println("digite o polegadas");
  while(!Serial.available());
  centimetros = Serial.parseFloat();
  
  //processamento
  polegadas =  polegadas / centimetros ;
   
  //saída
  Serial.println("a conversão de polegada para cm: " + String(centimetros));
  delay(100);
  
}