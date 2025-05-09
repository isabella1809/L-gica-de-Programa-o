/*
 Até 9 anos: “Apenas filmes infantis”
De 10 até 13 anos: “Filmes infantis e infantojuvenis”
De 14 até 17 anos: “Filmes até classificação 14 anos”
De 18 até 59 anos: “Todos os tipos de filmes”
60 anos ou mais: “Todos os tipos de filmes + desconto para idosos”
Idade negativa ou maior que 120: “Idade inválida, verifique os dados
 
*/

// variáveis
 int idade = 0;

void setup()
{
  Serial.begin(9600);
  
  Serial.println("cinema da bella");
  Serial.println();
  
  Serial.println("qual e a sua idade");
  while(!Serial.available());
  idade = Serial.parseInt();
   
  Serial.println("voce com essa idade de "+ String(idade)+ " pode assistir");
  
  if(idade >= 10 && idade <=13){
    Serial.println("Filmes infantis e infantojuvenis");
  }else if(idade >= 13 && idade <= 17){
    Serial.println("Filmes com a classificacao ate 14 anos");
  }else if(idade >= 17 && idade <= 59){
    Serial.println("Todos os tipos de filmes");
  }else if(idade >= 59 && idade <= 120){
   Serial.println("Todos os tipos de filmes + desconto para idosos");
  } else if(idade >= 120){
    Serial.println("Idade invalida, verifique os dados");
  } else {
     Serial.println("Apenas filmes infantis");
  }
}

void loop()
{
  
}