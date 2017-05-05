


/*
 * Desenvolvido por : Tiago Ribeiro SANTOS
 * 2017 - www.tiagoprogramador.carbonmade.com
 Email : tiago.programador@hotmail.com

 GIT : https://github.com/tiglinux
 */

/* 
 * Email : Tiago Ribeiro Santos
 * Desenvolvido usando Arrays ( versao 2.0) do Projeto 
 * 
 * Pinos digitais de 7 a 9 da RUA ZE 
 */

// pinos digitais de 7 a 9 da RUA ZE
int semaforo1[3] = {7,8,9};

/*
 * Pinos digitais de 10 a 12 da RUA JOAO 
 */
 
int semaforo2[3] = {10,11,12};

//Na funçao void setup , eu configuro todos os pinos digitais do arduino que serao usados no programa e irao ser configurados como saida (OUTPUT);

void setup() {
  
  //Configuraçao dos pinos da RUA ZE e RUA JOAO como SAIDA (Output) , no caso eu so quero ver o LED ser acesso entao defino como OUTPUT
  pinMode(semaforo1[0],OUTPUT); // Led Amarelo da RUA Ze
  pinMode(semaforo1[1],OUTPUT); //  Led Vermelho da RUA ze
  pinMode(semaforo1[2],OUTPUT); // LED VErde da Rua ZE

  pinMode(semaforo2[0],OUTPUT); // Led Amarelo da RUA Joao
  pinMode(semaforo2[1],OUTPUT); // Led Vermelho da RUA Joao
  pinMode(semaforo2[2],OUTPUT); // Led Verde  da RUA Joao
  
}

void loop() {

  digitalWrite(semaforo1[1],LOW); // LED Vermelho RUA ZE
  digitalWrite(semaforo1[2],HIGH);  //LED VERDE RUA ZE
  digitalWrite(semaforo2[1],HIGH);  // LED Vermelho RUA JOAO
  delay(4000);

  digitalWrite(semaforo1[2],LOW); //Led Verde RUA ZE
  digitalWrite(semaforo1[0],HIGH); // LED Amarelo RUA ZE
  delay(2000);
  digitalWrite(semaforo1[0],LOW);   // LED Amarelo RUA ZE

  digitalWrite(semaforo1[1],HIGH);  //Led Vermelho RUA ZE
  digitalWrite(semaforo2[1],LOW); // Led Vermelho RUA JOAO
  digitalWrite(semaforo2[2],HIGH);  // LED verde RUA JOAO
  delay(4000);

  digitalWrite(semaforo2[2],LOW); //LED Verde RUA JOAO
  digitalWrite(semaforo2[0],HIGH);  // LED Amarelo RUA JOAO
  delay(2000);
  digitalWrite(semaforo2[0],LOW); // LED AMARELO RUA JOAO
  
 
}
