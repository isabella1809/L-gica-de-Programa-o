int escolhadaOperacao;
float resultado;

float somar(float numero1param, float numero2param){
resultado = numero1param + numero2param ;
return resultado;
//  Serial.println("o resultado da soma foi:" + String(resultado));
}

void dividir(float numero1param, float numero2param){
resultado = numero1param / numero2param ;
 Serial.println("o resultado sua dividisão foi:" + String(resultado));
}


float subtrair(float numero1param, float numero2param){
resultado = numero1param - numero2param ;
return resultado;
}

void multiplicar (float numero1param, float numero2param){
resultado = numero1param * numero2param ;
 Serial.println("o resultado sua multiplicasão foi:" + String(resultado));
}

void setup()
{
  
  
  Serial.begin(9600);
  
  int contador = 0;
  float numero1;
  float numero2;

  
  do{
    Serial.println("bem-vindo(a) a calculadora mega blaster inteligente :p!!!\n");
    Serial.println("escolha uma das Operacoes:");   
    Serial.println("1- somar");
    Serial.println("2 - dividir");
    Serial.println("3 - subtrair");
    Serial.println("4 - multiplicar");
    while(!Serial.available()){}
    escolhadaOperacao = Serial.parseInt();
    
    Serial.println("para conseguirmos fazer a operacao matematica, precisamos que voce digite dois numeros ");
    Serial.println("digite o 1o numero");
    while(!Serial.available()){}
    numero1 = Serial.parseFloat();
    
    Serial.println("digite o 2o numero");
    while(!Serial.available()){}
    numero2 = Serial.parseFloat();
    
    switch(escolhadaOperacao){
      case 1:
    // somar(numero1, numero2);
   //  somar(1,3);
      float retornofuncaosomar;
      retornofuncaosomar = somar(numero1, numero2);
      Serial.println(retornofuncaosomar);
      break;
      
    case 2:
      dividir(numero1, numero2);
      dividir(1,3);
      break;
      
    case 3:
      float retornofuncaosubtrair;
      retornofuncaosubtrair = subtrair(numero1, numero2);
      Serial.println(retornofuncaosubtrair);
      break;
      
    case 4:
      multiplicar(numero1, numero2);
      multiplicar(1,3);
      break;
      
    default:
      Serial.println("opcao invalida! escolha uma opcao do 1 ao 4. ;)");
    }
    
    Serial.println("voce deseja voltar ao menu ? digite sim ou nao (em minusculo,por favor).");
    while(!Serial.available()){}
    

    if(Serial.readString() == "sim"){
      contador = 1;
    }
    else{
      contador = 0;
      Serial.println("ate breve");
      Serial.println("caso queira voltar ao meu,reinicie o programa ;)");
    }
    
  }
  while(contador != 0);
}

void loop()
{
  
}