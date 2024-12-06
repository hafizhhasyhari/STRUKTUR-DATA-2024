// Program Arduino: Mencari Komponen Robot
// Deskripsi: Program ini akan membaca sensor yang terhubung ke Arduino dan menampilkan status komponen robot melalui Serial Monitor.
// Author: Hafizh Hilman Asyhari
// Tahun: 2024

#include <Arduino.h>

// Definisikan pin yang digunakan untuk masing-masing sensor komponen robot
#define SENSOR_MOTOR 2
#define SENSOR_SENSOR 3
#define SENSOR_BATERAI 4

void setup() {
  // Inisialisasi pin sensor sebagai input
  pinMode(SENSOR_MOTOR, INPUT);
  pinMode(SENSOR_SENSOR, INPUT);
  pinMode(SENSOR_BATERAI, INPUT);
  
  // Inisialisasi komunikasi serial untuk menampilkan data
  Serial.begin(9600);
  while (!Serial) {
    ; // Tunggu koneksi serial
  }
}

void loop() {
  // Membaca status sensor komponen robot
  int motorStatus = digitalRead(SENSOR_MOTOR);
  int sensorStatus = digitalRead(SENSOR_SENSOR);
  int batteryStatus = digitalRead(SENSOR_BATERAI);
  
  // Menampilkan status komponen ke Serial Monitor
  Serial.println("Status Komponen Robot:");
  
  if (motorStatus == HIGH) {
    Serial.println("Motor: Komponen Berfungsi dengan Baik");
  } else {
    Serial.println("Motor: Tidak Berfungsi");
  }

  if (sensorStatus == HIGH) {
    Serial.println("Sensor: Komponen Berfungsi dengan Baik");
  } else {
    Serial.println("Sensor: Tidak Berfungsi");
  }

  if (batteryStatus == HIGH) {
    Serial.println("Baterai: Cukup Daya");
  } else {
    Serial.println("Baterai: Daya Lemah");
  }

  // Tunggu 2 detik sebelum memeriksa ulang
  delay(2000);
}
