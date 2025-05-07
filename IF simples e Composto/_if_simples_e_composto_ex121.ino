//Faça um programa que receba um número do usuário e informe se este
//número é par ou ímpar.
//variáveis 
int numero, numepar, numeimpar;

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
   
   if(numero != 0){
     Serial.println("esse numero e impar");
  } else {
    Serial.println("esse numero e par");
  }
   delay(1000);
}     
      

