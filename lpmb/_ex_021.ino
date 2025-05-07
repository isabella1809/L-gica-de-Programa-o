// C++ code
//variedade 

String cor = ""; 

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("digite uma cor");
  while (!Serial.available());
  cor = Serial.readString();
    
  if (cor == "vermelho") {//se retornar verdadeiro - losango sim 
    Serial.println("siga");
  } else {//falso - losango não
    Serial.println("pare");
}
  
  delay(2000);
}