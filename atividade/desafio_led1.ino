// C++ code
//

int ledvermelho = 13;
int ledamarelo= 11;
int ledverde = 9;
int escolhadaopcao;

void desenhapontinhos(int qtdpontos = 5, int tempo = 700)
{
  for(int i = 1; i <= 5; i++)
  {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
}

void setup()
{
  pinMode(ledvermelho, OUTPUT);
  pinMode(ledamarelo, OUTPUT);
  pinMode(ledverde, OUTPUT);

  Serial.begin(9600);
}

void loop()
{ 
  delay(500);
  delay(500); 

  do{
    Serial.println("escolha um led que voce quer acender ou apagar");
    Serial.println("1-Ligar Led Verde"); //
    Serial.println("2-Desligar Led Verde"); //
    Serial.println("3-Ligar Led Amarelo"); //
    Serial.println("4-Desligar Led Amarelo"); //
    Serial.println("5- Ligar Led Vermelho"); //
    Serial.println("6-Desligar Led Vermelho");//
    Serial.println("7-Ligar Todos os Leds"); //
    Serial.println("8-Desligar Todos os Leds");// 
    Serial.println("9-Sair "); //
    while(!Serial.available());
    escolhadaopcao  = Serial.parseInt();

    switch(escolhadaopcao){
      case 1:
      digitalWrite(ledverde, HIGH);
      Serial.println("ligando Led verde");
      desenhapontinhos();

      break;

      case 2:
      digitalWrite(ledverde, LOW);
      Serial.println("desligando Led verde");
       desenhapontinhos();

      break;

      case 3:
      digitalWrite(ledamarelo, HIGH);
      Serial.println("ligando Led amarelo");
       desenhapontinhos();

      break;

      case 4:
      digitalWrite(ledamarelo, LOW);
      Serial.println("Desligando Led amarelo");
       desenhapontinhos();

      break;

      case 5:
      digitalWrite(ledvermelho, HIGH);
      Serial.println("ligando Led Vermelho");
      desenhapontinhos();

      break;

      case 6:
      digitalWrite(ledvermelho, LOW);
      Serial.println("Desligando Led Vermelho");
      desenhapontinhos();
      break;

      case 7:
      digitalWrite(ledverde, HIGH);
      digitalWrite(ledamarelo, HIGH);
      digitalWrite(ledvermelho, HIGH);
      Serial.println("ligando todos os Led");
      desenhapontinhos();

      break;

      case 8:
      digitalWrite(ledverde, LOW);
      digitalWrite(ledamarelo, LOW);
      digitalWrite(ledvermelho, LOW);
      Serial.println("Desligando todos os Led");
      desenhapontinhos();

      break;
      
      case 9:
      digitalWrite(ledverde, LOW);
      digitalWrite(ledamarelo, LOW);
      digitalWrite(ledvermelho, LOW);
      Serial.println("saindo");
      desenhapontinhos();

      break;

      default:
            Serial.println("opcao invalida!!!");
      desenhapontinhos();
    } 
  }while(escolhadaopcao != 1);
}