int escolhadaOperacao;
float numero1;
float numero2;
void setup()
{
  Serial.begin(9600);
  
  int contador = 0;
  
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
    while(!Serial.println()){}
    numero1 = Serial.parseFloat();
    
    Serial.println("digite o 2o numero");
    while(!Serial.println()){}
    numero2 = Serial.parseFloat();
    
    switch(escolhadaOperacao){
      case 1:
      break;
      
    case 2:
      break;
      
    case 3:
      break;
      
    case 4:
      break;
      
    default:
      Serial.println("opcao invalida! escolha uma opcao do 1 ao 4. ;)");
    }
    
    Serial.println("voce deseja voltar ao menu ? digite sim ou nao (em minusculo,por favor).");
    while(!Serial.println()){}
    
    
    if(Serial.readString() == "sim"){
     contador= 1;
    }
    else{
    contador= 0;
      Serial.println("ate breve");
      Serial.println("caso queira voltar ao meu,reinicie o programa ;)");
    }
    
  }
  while(contador != 0);
}

void loop()
{
  
}