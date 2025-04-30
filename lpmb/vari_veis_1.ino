//Inicialização de Variáveis

// tipodedado nomedaVariável = valornicial;
int idade = 15.987;//declara/criar a variável idade e já inicia com valor 15
String nome = "isabella";
String segundonome = "garcia"; //textos


void setup()
{
  Serial.begin(9600);//inicia a serial 
  
}
void loop()
{
  Serial.println(idade);//imprime o valor da variável 15 
  idade = idade + 1;// 15 + 1 
  Serial.println(idade);//16
  
  Serial.print(nome + " ");//imprime o valor da variável nome junto com o espaço vazio 
  Serial.println(segundonome);
  
  delay(100);
  
}