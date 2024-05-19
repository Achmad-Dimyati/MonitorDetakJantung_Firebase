# MonitorDetakJantung_Firebase
Monitor Detak Jantung Firebase
Projek ini merupakan sebuah aplikasi monitor detak jantung yang menggunakan sensor detak jantung yang terhubung ke Arduino untuk membaca BPM (Beat Per Minute). Selanjutnya, data BPM yang terbaca akan dikirimkan melalui komunikasi serial dari Arduino ke modul ESP8266 atau ESP32 yang terhubung ke jaringan WiFi. Modul ESP akan membaca data BPM yang diterima melalui komunikasi serial, dan kemudian akan mentransmisikan data tersebut ke layanan Firebase Realtime Database. Hal ini memungkinkan pengguna untuk memantau data BPM secara real-time melalui aplikasi Firebase.
## Langkah-langkah projek ini
- Pembacaan BPM menggunakan Arduino: Sensor detak jantung terhubung ke Arduino untuk membaca BPM pengguna. Arduino akan terus membaca BPM dan mengirimkannya melalui komunikasi serial ke modul ESP.
- Transmisi Melalui Komunikasi Serial: Data BPM yang dibaca oleh Arduino akan dikirimkan melalui komunikasi serial ke modul ESP. Ini dilakukan agar data BPM dapat diakses dan dianalisis oleh modul ESP.
- Pengiriman Data ke Firebase menggunakan ESP: Modul ESP (seperti ESP8266 atau ESP32) akan membaca data BPM yang diterima melalui komunikasi serial dari Arduino. Setelah itu, modul ESP akan menggunakan koneksi WiFi untuk mentransmisikan data BPM ke layanan Firebase Realtime Database.
- Penerimaan dan Penyimpanan Data di Firebase: Data BPM yang diterima oleh Firebase akan disimpan di Firebase Realtime Database. Data ini dapat diakses secara real-time melalui aplikasi Firebase di perangkat pengguna.

![Monitoring Detak Jantung](https://github.com/Achmad-Dimyati/MonitorDetakJantung_Firebase/assets/167073850/726aa77a-aab4-414f-a06a-5958e2d7720e)
