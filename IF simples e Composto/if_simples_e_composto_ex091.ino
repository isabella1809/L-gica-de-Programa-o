//Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
//inferior a 500 reais. Escreva um programa que receba o salário de um
//funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
//funcionário não tenha direito a aumento.

//variáveis 

float salario;

 void setup() 
{
   Serial.begin(9600);
}

 void loop()
{ 
  // entrada
  
  
    Serial.println("digite o salario do funcionario");
   while(!Serial.available());
   salario = Serial.parseFloat();
   
   // processamento
    if(salario < 500){
     salario = salario + (salario * 0.30);
    }else{
      Serial.println("voce nao tera aumento de 30%");
    }
  Serial.println("seu novo salario e: " + String(salario));
     
   delay(1000);
}     
      

