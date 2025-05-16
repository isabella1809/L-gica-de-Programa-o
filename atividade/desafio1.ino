/*
While-éuma estrutura de repetiçãoque só executa a repetição quando a condição for verdadeira.
*/

//A função SETUP()tem com objetivo de inicialiaro programa. podemos chamar de configuração.
void setup()
{
 Serial.begin(9600);
  
  int contadorWhile = 81;
  
  while (contadorWhile <= 101) {
    Serial.println(contadorWhile);
   contadorWhile+=2;  
   
  }
/*1
  int contadorWhile = 5;
  
  while (contadorWhile >= 1) {
    Serial.println(contadorWhile);
   contadorWhile-- ;    
*/
  
  
  /* 2 int contadorWhile = 0;
  
  while (contadorWhile <= 100) {
    Serial.println(contadorWhile);
   contadorWhile+=5 ;    

  */
  
  
  /*3 int contadorWhile = 0;
  
while (contadorWhile <= 100) {
    Serial.println(contadorWhile);
   contadorWhile+=2 ;    
*/
  
  /*4
    int contadorWhile = 1;
  
  while (contadorWhile <= 99) {
    Serial.println(contadorWhile);
   contadorWhile+=2;    

  */
  /*5
   int contadorWhile = 60;
  
  while (contadorWhile <= 80) {
    Serial.println(contadorWhile);
   contadorWhile+=2;  
   
    int contadorWhile = 81;
  
  while (contadorWhile <= 101) {
    Serial.println(contadorWhile);
   contadorWhile+=2;  
   
  */
}
//A função loop() tem como objetivo de repetir varias vezeso programa 
void loop()
{
 
}