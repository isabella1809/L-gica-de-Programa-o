/*
 Estruturas condicionais encadeadas (3 ou mais respostas)
 
*/

//infantil - 5 ate 8 anos
//cadete - 8 ate 12 anos
//juvenil - 12 ate 15 anos
//junior - 15 ate 18 anos
// adulto - acima de 18 anos

int idade = 0;

void setup()
{
  Serial.begin(9600);
  
  Serial.println("Academia do Davi");
  Serial.println();
 
  Serial.println("qual e a idade do aluno");
  while(!Serial.available());
  idade = Serial.parseInt();
  
  Serial.println("Seu sobrinho tem " + String(idade) + " anos");
  
  if(idade >= 5 && idade <= 8){//idade entre 5 e 7?
    Serial.println("Cadastrado na cetegoria Infantil");
  } else if( idade >= 8 && idade < 12) {
     Serial.println("Cadastrado na cetegoria Cadete");
  } else if( idade >= 12 && idade < 15) {
    Serial.println("Cadastrado na cetegoria Juvenil");
  } else if( idade >= 15 && idade < 18) {
    Serial.println("Cadastrado na cetegoria junior");
  }else if(idade >= 18){ // de 8 pra cima 
     Serial.println("Cadastrado na cetegoria adulto"); 
  } else { //idades abaixo de 5 anos, ou seja, de 4 pra baixo
    Serial.println("Nao pode participar de esportes na academia do Davi");
}

   }
  
void loop()
{
  
}  
