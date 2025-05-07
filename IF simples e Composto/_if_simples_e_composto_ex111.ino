//Faça um programa que receba um número inteiro do usuário e informe se este
//número é positivo ou negativo.

//variáveis 
int numero, numepositivo, numenegativo;

void setup() 
{
   Serial.begin(9600);
}

 void loop()
{ 
  // entrada
  Serial.println("digite um numero");
   while(!Serial.available());
    numero = Serial.parseInt();
   
   if( numero!= 0){
     Serial.println("esse numero e positivo");
  } else {
    Serial.println("esse numero e negativo");
  }
   delay(1000);
}     
      

