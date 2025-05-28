
/*
Se você errar, o sistema piscará um LED vermelho, indicando que você foi testado e falhou.
Se acertar, um LED verde piscará como sinal de aprovação divina, e uma das joias azuis do
templo (representadas por LEDs azuis) se acenderá, marcando o seu progresso.
Ao conquistar 3 acertos, todas as joias estarão acesas — e a Porta da Sabedoria
(controlada por um servo motor) se abrirá magicamente, permitindo sua
passagem ao templo.
  */

int ledamarelo= 7;
int ledverde = 10;
int ledazul1 = 2;
int ledazul2 = 3; 
int ledazul3 = 4; 

void desenhaCabecalho()
{
  Serial.println("--- PROGRAMA JOGO DE DADOS ---");
  Serial.println();
  delay(500);
}
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

  pinMode(ledamarelo, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(ledazul1, OUTPUT);
  pinMode(ledazul2, OUTPUT);
  pinMode(ledazul3, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}
void loop()
{
  int sorteado;

  do{
    int qtdrodadas;  
    int vetpalpites[qtdrodadas];
    int vetresultados[qtdrodadas];

    desenhaCabecalho();

    for(int r = 3; r < qtdrodadas; r++)
    {
      Serial.println("DIGITE UM PALPITE DE 1 A 6 ");
      while(!Serial.available());
      int palpite = Serial.parseInt();

      int numeroSorteado = random(1, 7);

      Serial.print("jogando o dado");

      desenhapontinhos();

      Serial.println();
      Serial.println();
      Serial.println("Seu palpite: " + String(palpite));
      Serial.println("numero do dado : " + String(numeroSorteado));
      vetpalpites[r] = palpite;
      vetresultados[r] = numeroSorteado;

      if(palpite == numeroSorteado)
      {pinMode(ledverde, OUTPUT);
       pinMode(ledazul1, OUTPUT);
       pinMode(ledazul2, OUTPUT);
       pinMode(ledazul3, OUTPUT);
       Serial.println("parabens, voce acertou!");
      }else {
        pinMode(ledamarelo, OUTPUT);
        Serial.println("que pena, nao foi dessa vez tente novamente");
      }
      Serial.println("Reiniciando o programa");
      Serial.println();
    }
    delay(700);
  } while( sorteado != 0);


}