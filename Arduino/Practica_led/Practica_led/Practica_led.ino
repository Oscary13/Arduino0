#define LED 15
#define LED1 2 //#define sirve para asignar valores a una etiqueta de datos y sera utilizado pra asiganarle una etiqueta a un puerto o pin del microcontrolador que puede ser de entrada o salida de datos
#define LED2 4 
#define LED4 5 //pinMode sirve para configurar el pin del microcontrolador como entrada o salida de datos
#define LED5 18
#define LED6 19
#define LED7 21
#define LED8 22
#define LED9 23

int retardo = 100;
void setup() {

  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  Serial.begin(115200);
  Serial.println("El programa se esta ejecutando....");

}

void loop() {

  digitalWrite(LED, HIGH);//digitalWrite Sirve para escribir en el pin de salida un dato digital es decir 0 o 1
  delay(50);
  digitalWrite(LED, LOW);
  delay(50);
  digitalWrite(LED1, HIGH);
  delay(50);
  digitalWrite(LED1, LOW);
  delay(50);
  digitalWrite(LED2, HIGH);
  delay(50);
  digitalWrite(LED2, LOW);
  delay(50);
  digitalWrite(LED4, HIGH);
  delay(50);
  digitalWrite(LED4, LOW);
  delay(50);
  digitalWrite(LED5, HIGH);
  delay(50);
  digitalWrite(LED5, LOW);
  delay(50);
  digitalWrite(LED6, HIGH);
  delay(50);
  digitalWrite(LED6, LOW);
  delay(50);
  digitalWrite(LED7, HIGH);
  delay(50);
  digitalWrite(LED7, LOW);
  delay(50);
  digitalWrite(LED8, HIGH);
  delay(50);
  digitalWrite(LED8, LOW);
  delay(50);
  digitalWrite(LED9, HIGH);
  delay(50);
  digitalWrite(LED9, LOW);
  delay(50);

  digitalWrite(LED9, HIGH);
  delay(50);
  digitalWrite(LED9, LOW);
  delay(50);
  digitalWrite(LED8, HIGH);
  delay(50);
  digitalWrite(LED8, LOW);
  delay(50);
  digitalWrite(LED7, HIGH);
  delay(50);
  digitalWrite(LED7, LOW);
  delay(50);
  digitalWrite(LED6, HIGH);
  delay(50);
  digitalWrite(LED6, LOW);
  delay(50);
  digitalWrite(LED5, HIGH);
  delay(50);
  digitalWrite(LED5, LOW);
  delay(50);
  digitalWrite(LED4, HIGH);
  delay(50);
  digitalWrite(LED4, LOW);
  delay(50);
  digitalWrite(LED2, HIGH);
  delay(50);
  digitalWrite(LED2, LOW);
  delay(50);
  digitalWrite(LED1, HIGH);
  delay(50);
  digitalWrite(LED1, LOW);
  delay(50);
  digitalWrite(LED, HIGH);//digitalWrite Sirve para escribir en el pin de salida un dato digital es decir 0 o 1
  delay(50);
  digitalWrite(LED, LOW);
  delay(50);

  digitalWrite(LED5, HIGH);
  delay(100);
  digitalWrite(LED5, LOW);
  delay(100);

  digitalWrite(LED7, HIGH);
  delay(100);
  digitalWrite(LED7, LOW);
  delay(100);
   digitalWrite(LED4, HIGH);
  delay(100);
  digitalWrite(LED4, LOW);
  delay(100);
  digitalWrite(LED8, HIGH);
  delay(100);
  digitalWrite(LED8, LOW);
  delay(100);

  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED1, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);
  delay(100);


    digitalWrite(LED9, HIGH);
  delay(100);
  digitalWrite(LED9, LOW);
  delay(100);
    digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED2, LOW);
  delay(100);
    digitalWrite(LED6, HIGH);
  delay(100);
  digitalWrite(LED6, LOW);
  delay(100);

  
}
