//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//Declaração de variáveis
int idade = 0;
int idademeses = 0;
int idadeDias = 0;
int idadeHoras = 0;
int idadeMinutos = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
   Serial.println("digite sua idade em anos");//mostra uma mensagem na tela (via serial)
  while(!Serial.available() );//espera o usuário digitar e dar um <Entrer>
  idade = Serial.parseInt();//transforma a idade digitada em número
  
  
  //processamento
  idademeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idade * 8766;
  idadeMinutos = idade * 525960;
  
 
  //saída
  Serial.println("idade em meses: "+ String(idademeses));//imprime o texto
  Serial.println("idade em Dias: "+ String(idadeDias));//imprime o texto
  Serial.println("idade em Horas: "+ String(idadeHoras));//imprime o texto
  Serial.println("idade em Minutos: "+ String(idadeMinutos));//imprime o texto
  
  delay(1000);
}
