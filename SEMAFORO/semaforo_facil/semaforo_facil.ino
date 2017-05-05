/* 2017
 * Desenvolvido por : Tiago Ribeiro Santos
 * 
 * Email : tiago.programador@hotmail.com
 * GIT : https://github.com/tiglinux
 */



/*
 * Pinos digitais de 7 a 9 da RUA ZE 1 
 */

int ruaZE_Vermelho = 7;
int ruaZE_Amarelo = 8;
int ruaZE_Verde = 9;

/*
 * Pinos digitais de 10 a 12 da RUA JOAO 2
 */
 
int ruaJOAO_Vermelho = 10;
int ruaJOAO_Amarelo = 11;
int ruaJOAO_Verde = 12;


//Na funçao void setup , eu configuro todos os pinos digitais do arduino que serao usados no programa e irao ser configurados como saida (OUTPUT);

void setup() {
  
  //Configuraçao dos pinos da RUA ZE e RUA JOAO como SAIDA (Output) , no caso eu so quero ver o LED ser acesso entao defino como OUTPUT
  pinMode(ruaZE_Amarelo,OUTPUT);
  pinMode(ruaZE_Vermelho,OUTPUT);
  pinMode(ruaZE_Verde,OUTPUT);

  pinMode(ruaJOAO_Amarelo,OUTPUT);
  pinMode(ruaJOAO_Vermelho,OUTPUT);
  pinMode(ruaJOAO_Verde,OUTPUT);
  
}

void loop() {
  digitalWrite(ruaZE_Vermelho,LOW);  //apaga o led vermelho (sinal 1)
  digitalWrite(ruaZE_Verde,HIGH); //acende o led verde (sinal 1)
  digitalWrite(ruaJOAO_Vermelho,HIGH); //acende o led vermelho (sinal 2)
  delay(4000);          //espera 4 segundos
  
  digitalWrite(ruaZE_Verde,LOW);  //apaga o led verde (sinal 1)         
  digitalWrite(ruaZE_Amarelo,HIGH); //acende o led amarelo (sinal 1)
  delay(2000);          //espera 2 segundos
  digitalWrite(ruaZE_Amarelo,LOW);  //apaga o led amarelo (sinal 1) 
  
  digitalWrite(ruaZE_Vermelho,HIGH); //acende o led vermelho (sinal 1)
  digitalWrite(ruaJOAO_Vermelho,LOW);  //apaga o led vermelho (sinal 2)
  digitalWrite(ruaJOAO_Verde,HIGH); //acende o led verde (sinal 2)
  delay(4000);          //espera 4 segundos
  
  digitalWrite(ruaJOAO_Verde,LOW); //apaga o led verde (sinal 2) 
  digitalWrite(ruaJOAO_Amarelo,HIGH); //acende o led amarelo (sinal 2)
  delay(2000);          //espera 2 segundos
  digitalWrite(ruaJOAO_Amarelo,LOW);  //apaga o led amarelo (sinal 2)  
   
 
}
