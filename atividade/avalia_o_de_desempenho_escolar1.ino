// variáveis

float nota1 = 0;
float nota2 = 0;
float frequencia = 0;
int novanota = 0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{ 
  Serial.println("Desempenho Escolar");
  Serial.println();

Serial.println("digite sua nota");
while(!Serial.available());
nota1 = Serial.parseFloat();

Serial.println("digite sua segunda nota");
while(!Serial.available());
nota2 = Serial.parseFloat();


Serial.println("digite sua frequência");
while(!Serial.available());
frequencia = Serial.parseFloat(); 
  
Serial.println( String(nota1) + String(nota2));
Serial.println("a soma da sua nota foi:" +( int(novanota)/ 2));
  
 if(novanota = 10 && frequencia = 100){
    Serial.println("Parabéns! Nota máxima!");
  }else if(novanota >= 6 && frequencia >= 75%){
    Serial.println("aluno aprovado");
  }else if(novanota <= 5 && frequencia >= 75%){
    Serial.println(" aluno foi reprovado por nota");
  }else if(novanota >=6 && frequencia <= 75%){
   Serial.println("aluno reprovado por frequencia");
  } else if(novanota <=5 && frequencia <= 75%){
    Serial.println("aluno reprovado por frequencia e media da nota");
  } else {
     Serial.println("nao intentificado");
  }
}