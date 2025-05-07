//c++
//variáveis 
String apptempo = "chuva"; 

 void setup()
   
{
   Serial.begin(9600);
}

 void loop()
 {
   if(apptempo == "chuva"){
     Serial.println("hoje vai chover, por favor");
     Serial.println("peque o guarda-chuva");
   } else{
     Serial.println("hoje esta ensolarado, bom passeio");
     
   Serial.println("saindo de casa");
   }
   delay(3000);
}
