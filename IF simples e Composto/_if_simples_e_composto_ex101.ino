//Elabore um programa para cálculo de preços de produtos que solicite o preço
//de compra do produto e o percentual a ser aplicado em cima desse valor para
//a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
//aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
//produto será vendido com uma margem muito pequena de lucro.

//variáveis 
float  precocompra,  percentual, precovenda;

 void setup() 
{
   Serial.begin(9600);
}

 void loop()
{ 
  // entrada
  Serial.println("digite quanto voce pagou no produto");
   while(!Serial.available());
   precocompra = Serial.parseFloat();
   
   Serial.println("qual o percentguala ser aplicado na vendado produto");
   while(!Serial.available());
    percentual= Serial.parseFloat();
   
  precovenda =  precocompra +( precocompra / 100 * percentual );
   
   Serial.println("preco de venda:"+String(precovenda));
   
   if( percentual < 50){
     Serial.println("o produto sera vendido com uma margem muito pequena de lucro ");
   }
   delay(1000);
}     
      

