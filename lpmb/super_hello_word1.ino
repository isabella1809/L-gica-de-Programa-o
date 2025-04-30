// C++ code
//Inicialição do Arduino

/*

|+++++++++++++++++|
     helo word
|+++++++++++++++++|

*/

void setup()
{
  
  Serial.begin(9600);//inicializa a porta/módulo serial
}

void loop()
{
  Serial.println("|+++++++++++++++++++|");
  Serial.println("     hello word      "); //imprime uma linha na porta serial de depois dá um <entrer>
  Serial.println("|+++++++++++++++++++|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  delay(1000); // aguarda 1 segundo
} 
  