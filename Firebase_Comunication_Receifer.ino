//include Liblary wifi
#include <WiFi.h>
#include <HTTPClient.h>

//Firebase
#include <FirebaseArduino.h>
#include <ArduinoJson.h>  //versi 5.xx

// Network
const char* ssid = "LAB. FISIKA";
const char* password = "12345678";

//sediakan variabel untuk koneksi ke firebase
#define FIREBASE_HOST "URL host Firebase Realtime Database "
#define FIREBASE_AUTH "token otentikasi Firebase"

 unsigned long waktusebelum1 = 0;
 unsigned long interval1 = 2000;

unsigned long waktusebelum2 = 0;
unsigned long interval2 = 2000;



void setup() {
  Serial.begin(9600);  
  WiFi.begin(ssid, password);
  //cek koneksi wifi
  while (WiFi.status() != WL_CONNECTED) {
    //progress sedang mencari WiFi
    //    digitalWrite(led, HIGH);
    Serial.print(".");
    delay(500);
    //    digitalWrite(led, LOW);
    delay(500);
  }
  Serial.println("SSID: ");
  Serial.println(WiFi.SSID());
  Serial.println("Wifi Connected");
  Serial.println("IP Address : ");
  Serial.println(WiFi.localIP());
  //Koneksi ke Fire Base
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void loop() {
//firebase();
Reading();
}


void Reading(){
unsigned long waktusekarang2 = millis();
if(waktusekarang2-waktusebelum2 >= interval2){

  //BACA DATA DARI NODEMCU
  // SEDIAKAN VARIABEL UNTUK MANAMPUNG DATA
  String data = "";
  
  //SELAMA DATA SERIAL ADA/TERSEDIA
  while(Serial.available()>0)
  {
    //AMBIL DATA SERIAL KEMUDAIAN MASUKAN KE VARIABEL DATA
    data += char(Serial.read());
  }
  //MEMBUANG SPASI DATA
  data.trim();
  
  //TAMPILKAN DI SERIAL MONITOR
  Serial.println("Data dari Arduino UNO : " + data);
 int intData = data.toInt();
  
  Firebase.setInt("Sensor", intData); 
  //delay(1000);
  waktusebelum2 = millis();
   }
}