// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukan library yang digunakan, termasuk kelas induk (kelas Vehicle) dari kelas Car
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

// Kelas Car digunakan untuk mempresentasikan data Mobil
// Kelas Car merupakan kelas turunan dari kelas Vehicle dan kelas komposisi dari kelas Garage & Parking Lot
class Car : public Vehicle {
    private:
    // Atribut yang digunakan pada kelas Car terdiri dari jumlah kursi, dan jumlah pintu
        string jumlah_kursi;
        string jumlah_pintu;

    public:
        // Constructor
        Car() {

        }

        // Constructor : Overloading
        Car(string jumlah_kursi, string nama_kendaraan, string plat_nomor, string merk, string tahun_produksi, string warna) : Vehicle(nama_kendaraan, plat_nomor, merk, tahun_produksi, warna) {
            this->jumlah_kursi = jumlah_kursi;
            this->jumlah_pintu = "";
        }


        // Constructor : Overloading
        Car(string jumlah_kursi, string jumlah_pintu, string nama_kendaraan, string plat_nomor, string merk, string tahun_produksi, string warna) : Vehicle(nama_kendaraan, plat_nomor, merk, tahun_produksi, warna) {
            this->jumlah_kursi = jumlah_kursi;
            this->jumlah_pintu = jumlah_pintu;
        }

        // Method set untuk set setiap nilai atribut pada kelas Car
        void setJumlahKursi(string jumlah_kursi) {
            this->jumlah_kursi = jumlah_kursi;
        }

        void setJumlahPintu(string jumlah_pintu) {
            jumlah_pintu = jumlah_pintu;
        }

        // Method get untuk mendapatkan nilai setiap atribut pada kelas Car
        string getJumlahKursi() {
            return jumlah_kursi;
        }

        string getJumlahPintu() {
            return jumlah_pintu;
        }

        // Destructor
        ~Car() {

        }
};
