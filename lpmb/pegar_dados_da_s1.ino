// C++ code 
//Variáveis 
String nome = "";
String sobrenome = "";
int idade = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // pedir os dados para p usuário 
  //nome 
  Serial.println("qual e o seu nome ?");//mostra uma mensagem na tela (via serial)
  while(!Serial.available() );//espera o usuário digitar e dar um <Entrer>
  nome = Serial.readString();//guarda o texto que o usuário digitou na variável nome
  
   Serial.println("qual e o seu sobrenome ?");//mostra uma mensagem na tela (via serial)
  while(!Serial.available() );//espera o usuário digitar e dar um <Entrer>
  sobrenome = Serial.readString();//guarda o texto que o usuário digitou na variável nome
  
  
   Serial.println("qual e o seu idade?");//mostra uma mensagem na tela (via serial)
  while(!Serial.available() );//espera o usuário digitar e dar um <Entrer>
  idade = Serial.parseInt();//converte o texto que o usuáriodigitou para inteiro, antes de guardarna variável
  
  //Exibir os dados na serial 
  Serial.println("Nome informado: "+ nome);
  Serial.println("sobrenome informado: "+ sobrenome);
  Serial.println("idade informado: "+ String(idade));
}
