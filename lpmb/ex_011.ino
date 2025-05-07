// C++ code
//variedade 
int idade = 0; 

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("digite sua idade");
  while (!Serial.available());
  idade = Serial.parseInt();
  
  
 Serial.println("Idade: " + String(idade));
  
  if ( idade >= 18 ) {//se retornar verdadeiro - losango sim 
    Serial.println("maior de idade");
  } else {//falso - losango não
    Serial.println("menor de idade");
}
  
  delay(2000);
}