#define LED1 2
#define LED2 3 //#define sirve para asignar valores a una etiqueta de datos y sera utilizado pra asiganarle una etiqueta a un puerto o pin del microcontrolador que puede ser de entrada o salida de datos
#define LED3 4              //pinMode sirve para configurar el pin del microcontrolador como entrada o salida de datos
#define LED4 5
#define LED5 6
#define LED6 7
#define LED7 8
#define LED8 9
#define LED9 10
#define LED10 11
#define LED11 12
#define LED12 13

int retardo = 100;
void setup() {

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  pinMode(LED7, OUTPUT);
  pinMode(LED8, OUTPUT);
  pinMode(LED9, OUTPUT);
  pinMode(LED10, OUTPUT);
  pinMode(LED11, OUTPUT);
  pinMode(LED12, OUTPUT);


  
  Serial.begin(115200);
  Serial.println("El programa se esta ejecutando....");

}

void loop() {

  digitalWrite(LED1, HIGH);//digitalWrite Sirve para escribir en el pin de salida un dato digital es decir 0 o 1
  delay(retardo);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  delay(retardo);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(retardo);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  delay(retardo);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  delay(retardo);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, HIGH);
  delay(retardo);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, HIGH);
  delay(retardo);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, HIGH);
  delay(retardo);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, HIGH);
  delay(retardo);
  digitalWrite(LED9, LOW);
  digitalWrite(LED10, HIGH);
  delay(retardo);
  digitalWrite(LED10, LOW);
  digitalWrite(LED11, HIGH);
  delay(retardo);
  digitalWrite(LED11, LOW);
  digitalWrite(LED12, HIGH);
  delay(retardo);
  digitalWrite(LED12, LOW);
  digitalWrite(LED11, HIGH);
  delay(retardo);
  digitalWrite(LED11, LOW);
  digitalWrite(LED10, HIGH);
  delay(retardo);
  digitalWrite(LED10, LOW);
  digitalWrite(LED9, HIGH);
  delay(retardo);
  digitalWrite(LED9, LOW);
  digitalWrite(LED8, HIGH);
  delay(retardo);
  digitalWrite(LED8, LOW);
  digitalWrite(LED7, HIGH);
  delay(retardo);
  digitalWrite(LED7, LOW);
  digitalWrite(LED6, HIGH);
  delay(retardo);
  digitalWrite(LED6, LOW);
  digitalWrite(LED5, HIGH);
  delay(retardo);
  digitalWrite(LED5, LOW);
  digitalWrite(LED4, HIGH);
  delay(retardo);
  digitalWrite(LED4, LOW);
  digitalWrite(LED3, HIGH);
  delay(retardo);
  digitalWrite(LED3, LOW);
  digitalWrite(LED2, HIGH);
  delay(retardo);
  digitalWrite(LED2, LOW);
  digitalWrite(LED1, HIGH);
  delay(retardo);
  digitalWrite(LED1, LOW);
  delay(retardo);
}
