int tabuadaescolhida;
int resultado;
void setup()
{
Serial.begin(9600);
  
  Serial.println("Bem-vinao(a) a trabuada ;)");
  Serial.println(" digite a tabuada que vace quer ver:"); 
  while(!Serial.available()){}
  tabuadaescolhida = Serial.parseInt();
  
  for(int contador = 1; contador <= 10; contador++){
  resultado = tabuadaescolhida * contador++;
  Serial.println(String(tabuadaescolhida)+ " x " + String(contador)+ " = " + String( resultado));
 }

}
void loop()
{
}