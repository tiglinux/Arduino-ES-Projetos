

/* Programa LOOP DO MAL huashahuahsuahuhuhu xD
 *  Pisca a pisca de 3 em 3 segundos,quando o usuario pressionar o botão ele reinicia o BLINK de 3 em 3 segundos;MM
 * Desenvolvido por ; Tiago ribeiro santos
 * Data : 10/07/2017
 * email : tiago.programador@hotmail.com
 * 
 * 
 */
int qtd = 3;
int leds [] = {7,8};  //UM array de leds;
int botao = 6;
int estadobotao = 0;

//Criando funções &&  função de acender LED ..

void acendeLed(int estadobotao){
 
  //Quando botão for pressionado ele fará uma leitura de entrada de dados INPUT
  estadobotao = digitalRead(botao); 
  
  if(estadobotao == HIGH){  //Caso botão for pressionado estadobotao = 5 v(high) ele continua a repetição de 3 ciclos!
    Serial.println("Não!!!!Você pediu para eu repetir mais 3 vezes!hahaah :)");
    Serial.print("VOU TE PERTUBAR MAIS UMA VEZ HAHAHAH xD :)"); 
    for(int x = 0;x < qtd;x++){ 
      for(int i = 0;i < 2; i++){
          digitalWrite(leds[i],HIGH);
          delay(3000);
          digitalWrite(leds[i],LOW);
          delay(3000);
      }
    }
    
  } else{
     //Desliga o Vetor de LEDS ( vermelho e verde);
      for(int i = 0;i < 2; i++){
        digitalWrite(leds[i],LOW);
        Serial.println("Ja contei 3 vezes o Led piscando o que devo fazer??");
        Serial.print("FIM do Programa?? ");
      }
    }
}

void setup() {
  Serial.begin(9600); // Habilita o monitor Serial ;
 
  for(int i = 0; i < 2;i++){ // Repetição de vetor de leds;
    pinMode(leds[i],OUTPUT);
  }
  pinMode(botao,OUTPUT);

  //repete 3 vezes o BLINK de 3 em 3 segundos;
  for(int x = 0;x < qtd;x++){ 
      for(int i = 0;i < 2; i++){
          digitalWrite(leds[i],HIGH);
          delay(3000);
          digitalWrite(leds[i],LOW);
          delay(3000);
      }
  }

  
}


void loop() {
 acendeLed(estadobotao);// repete mais 3 vezes caso botão seja pressionado;
}


