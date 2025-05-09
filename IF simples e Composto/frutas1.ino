void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Escolha uma fruta");
  Serial.println("  1 - Banana");
  Serial.println("  2 - Maca");
  Serial.println("  3 - Tomate");
  Serial.println("  4 - Laranja");
  while( !Serial.available());
  int opcao = Serial.parseInt();
  
  switch(opcao)
  {
    case 1:
       Serial.println("Opcao escolhida: Banana");
    break;
    case 2 :
    Serial.println("Opcao escolhida: Maca");
    break;
    case 3:
    Serial.println("Opcao escolhida: Tomate");
    break;
    case 4:
    Serial.println("Opcao escolhida: Laranja");
    break;
    default:
    Serial.println("Nao temos essa opcao");
  }
  
  Serial.println();
  
}//fim do jogo