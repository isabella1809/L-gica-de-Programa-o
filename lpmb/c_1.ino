// C++ code
//variedade 
int idade = 15; 

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Idade: " + String(idade));
  
  if ( idade >= 16 ) {//se retornar verdadeiro - losango sim 
    Serial.println("Voto obrigatorio");
  } else {//falso - losango não
    Serial.println("Sem idade para votar");
}
  
  delay(2000);
}