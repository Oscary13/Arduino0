#include <DHT.h>
#include <DHT_U.h>
#include <WiFi.h>
#include <MQTT.h>
#define LED1 5
#define LED2 21
#define LED3 22
#define LED4 23
#define BOTON 13

DHT dht(18,DHT11);

float temperatura, humedad;
const char* ssid = "TotalPlay-B78E";
const char* pass = "fahPE4dDGHcNUEC";

const char* mqtt_servidor = "iothall.sytes.net";
const int mqtt_puerto = 1883;
const char* mqtt_pass = "test";
const char* mqtt_topico_raiz = "O$cary";
const char* mqtt_usuario = "test";

WiFiClient espClient;
MQTT mqtt(espClient);

void isr(){
  //Serial.println("Hola, entre a la escyela");
  mqtt.publicar("Oscary", "Hola Bebe");
}

void callback(char* topic, byte* payload, unsigned int length)
{
  Serial.println("Publicadron al Topico: " + (String)topic);
  String mensaje = "";
  for (int i = 0; i < length; i++)
  {
    mensaje += (char)payload[i];
  }

  if (mensaje == "prende foco 1")
  {
    Serial.println("Foco 1 prendido");
    digitalWrite(LED1, HIGH);

    
  }
  if (mensaje == "apaga foco 1")
  {
    Serial.println("Foco 1 apagado");
    digitalWrite(LED1, LOW);
  }

  if (mensaje == "prende foco 2")
  {
    Serial.println("Foco 2 prendido");
    digitalWrite(LED2, HIGH);
  }
  if (mensaje == "apaga foco 2")
  {
    Serial.println("Foco 2 apagado");
    digitalWrite(LED2, LOW);
  }
  if (mensaje == "prende foco 3")
  {
    Serial.println("Foco 3 prendido");
    digitalWrite(LED3, HIGH);
  }
  if (mensaje == "apaga foco 3")
  {
    Serial.println("Foco 3 apagado");
    digitalWrite(LED3, LOW);
  }
  if (mensaje == "prende foco 4")
  {
    Serial.println("Foco 4 prendido");
    digitalWrite(LED4, HIGH);
  }
  if (mensaje == "apaga foco 4")
  {
    Serial.println("Foco 4 apagado");
    digitalWrite(LED4, LOW);
  }
  if (mensaje == "prende focos")
  {
    Serial.println("Foco 2 y 3 encendidos");
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
  }
  if (mensaje == "apaga focos")
  {
    Serial.println("Foco 2 y 3 apagados");
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }

  if (mensaje == "sensor dht")
  {
    Serial.println("Sensor DHT enviando información....");
    humedad = dht.readHumidity();
    temperatura = dht.readTemperature();
    Serial.println("Temperatura: " + String(temperatura) + " HUMEDAD:" + String(humedad));
    mqtt.publicar("O$cary", "Temperatura: " + String(temperatura) + " HUMEDAD:" + String(humedad));
    delay(350);
  }

  Serial.println("Payload: " + mensaje);
}

void setup()
{
  Serial.begin(115000);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, pass);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(BOTON, INPUT);
  //attachInterrupt(BOTON, isr, RISING);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
    
    // pinMode(BOTON, INPUT);

  }
  Serial.println("");
  Serial.println("wifi conected");
  mqtt.configurarBroker(mqtt_servidor, mqtt_puerto, mqtt_topico_raiz);
  mqtt.setCallback(callback);
  dht.begin();
}

void loop()
{
  if (!mqtt.connected())
  {
    mqtt.reconnect(mqtt_usuario, mqtt_pass, "OBB");
  }
  mqtt.loop();

  if (digitalRead(BOTON))
  {
    while (digitalRead(BOTON)){
      delay(20);
    }
     Serial.println("Mensaje enviado");
      mqtt.publicar("O$cary", "Ya entre a la escuela");
      
    
    
  }
  
  
}
