#include <WiFi.h>         // Untuk koneksi WiFi
#include <MQTT.h>         // Untuk MQTT
#include <ArduinoOTA.h>   // Untuk OTA update
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <ESP32Servo.h>
#include "DFRobotDFPlayerMini.h"

// Konfigurasi WiFi
const char* ssid = "ECO-BIN";     // Ganti dengan nama WiFi Anda
const char* password = "ECOBIN2024"; // Ganti dengan password WiFi Anda 
const char* mqtt_server = "broker.hivemq.com"; // Broker MQTT
const char* client_id   = "ecobin/apk/012345"; // Client ID MQTT

WiFiClient net;
MQTTClient client;

// Inisialisasi LCD dan DFPlayer Mini
LiquidCrystal_I2C lcd(0x27, 20, 4);
#define PIN_MP3_TX 17
#define PIN_MP3_RX 16
HardwareSerial mySerial(2);
DFRobotDFPlayerMini player;

// Definisi pin sensor ultrasonik
#define TRIG_ORGANIK 27
#define ECHO_ORGANIK 26
#define TRIG_ANORGANIK 14
#define ECHO_ANORGANIK 25
#define TRIG_METAL 12
#define ECHO_METAL 13

// Definisi pin servo
const int servoPin1 = 4; 
const int servoPin2 = 5; 
const int servoPin3 = 18; 

Servo myServo1, myServo2, myServo3;

// Variabel kapasitas
int kapasitasOrganik = 0, kapasitasAnorganik = 0, kapasitasMetal = 0;

// Fungsi untuk membaca jarak dari sensor ultrasonik
float readDistanceCM(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  return pulseIn(echoPin, HIGH) * 0.034 / 2;
}

// Fungsi untuk menghitung kapasitas berdasarkan jarak
int calculateCapacity(float distance, float maxDistance) {
  return map(distance, 0, maxDistance, 100, 0);
}

// Fungsi untuk mengirim data ke MQTT
void publishMQTT(const char* topic, int value) {
  client.publish(topic, String(value).c_str());
}

// Fungsi untuk menginisialisasi LCD
void initializeLCD() {
  lcd.begin(20, 4);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Kapasitas Sampah");
  lcd.setCursor(0, 1);
  lcd.print("Organik   = ");
  lcd.setCursor(0, 2);
  lcd.print("Anorganik = ");
  lcd.setCursor(0, 3);
  lcd.print("Metal     = ");
}

// Fungsi untuk menampilkan kapasitas pada LCD
void displayCapacity(int kapasitas, int row) {
  lcd.setCursor(12, row);
  lcd.print("    ");
  lcd.setCursor(12, row);
  lcd.print(kapasitas);
  lcd.print("%");
  if (kapasitas == 100) {
    lcd.setCursor(16, row);
    lcd.print("FULL");
  } else {
    lcd.setCursor(16, row);
    lcd.print("    ");
  }
}

// Fungsi untuk koneksi WiFi dan MQTT
void connect() {
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  client.begin(mqtt_server, net);
  while (!client.connect(client_id)) {
    delay(1000);
  }
}

void setup() {
  Serial.begin(115200);
  // Inisialisasi WiFi, MQTT, dan OTA
  connect();
  ArduinoOTA.begin();
  
  // Inisialisasi DFPlayer Mini
  mySerial.begin(9600, SERIAL_8N1, PIN_MP3_RX, PIN_MP3_TX);
  if (player.begin(mySerial)) {
    player.volume(30);
    player.play(1);
  }
  
  // Inisialisasi LCD
  initializeLCD();

  // Inisialisasi pin ultrasonik
  pinMode(TRIG_ORGANIK, OUTPUT);
  pinMode(ECHO_ORGANIK, INPUT);
  pinMode(TRIG_ANORGANIK, OUTPUT);
  pinMode(ECHO_ANORGANIK, INPUT);
  pinMode(TRIG_METAL, OUTPUT);
  pinMode(ECHO_METAL, INPUT);

  // Inisialisasi servo
  myServo1.attach(servoPin1);
  myServo2.attach(servoPin2);
  myServo3.attach(servoPin3);
  myServo1.write(90);
  myServo2.write(90);
  myServo3.write(90);
}

void loop() {
  ArduinoOTA.handle();
  client.loop();

  // Membaca kapasitas
  float distanceOrganik = readDistanceCM(TRIG_ORGANIK, ECHO_ORGANIK);
  float distanceAnorganik = readDistanceCM(TRIG_ANORGANIK, ECHO_ANORGANIK);
  float distanceMetal = readDistanceCM(TRIG_METAL, ECHO_METAL);

  kapasitasOrganik = calculateCapacity(distanceOrganik, 100);
  kapasitasAnorganik = calculateCapacity(distanceAnorganik, 100);
  kapasitasMetal = calculateCapacity(distanceMetal, 100);

  // Tampilkan kapasitas di LCD
  displayCapacity(kapasitasOrganik, 1);
  displayCapacity(kapasitasAnorganik, 2);
  displayCapacity(kapasitasMetal, 3);

  // Kirim kapasitas ke MQTT
  publishMQTT("ecobin/kapasitas/organik", kapasitasOrganik);
  publishMQTT("ecobin/kapasitas/anorganik", kapasitasAnorganik);
  publishMQTT("ecobin/kapasitas/metal", kapasitasMetal);

  // Kontrol servo berdasarkan kapasitas
  if (kapasitasOrganik == 100) {
    myServo1.write(180);
    delay(3000);
    myServo1.write(90);
  }

  if (kapasitasAnorganik == 100) {
    myServo2.write(180);
    delay(3000);
    myServo2.write(90);
  }

  if (kapasitasMetal == 100) {
    myServo3.write(180);
    delay(3000);
    myServo3.write(90);
  }

  delay(5000); // Delay untuk pembaruan data
}
