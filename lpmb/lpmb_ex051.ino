//Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54 centímetros.

// tipodedado nomedaVariável = valornicial;
float centimetros = 0;//declara/criar a variável cenimetros
float polegadas = 0;


void setup()
{
  Serial.begin(9600);//inicia a serial 
  
}
void loop()
{
  
  //entrada
  Serial.println("digite o centimetros");
  while(!Serial.available());
  centimetros = Serial.parseFloat();
  
  //processamento
  polegadas = centimetros / 2.54;
   
  //saída
  Serial.println("a conversão de cm para polegada: " + String(polegadas));
  delay(100);
  
}