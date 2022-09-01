void setup() {

Serial.begin(115200);
//Serial.println("Hola");

//byte contador = 0;

}

void loop() {
//Contador de 0 a 255
//byte contador = 0;
//for (contador=0; contador<300; contador++){
  //Serial.println(contador);
  //delay(2000);
//}

//Calcular las potencias en base 2

int numero = 2;
int potencia = pow(numero, 32);
Serial.println(potencia);
delay(2000);

exit(0);
}
