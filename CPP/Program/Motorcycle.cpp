// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukan library yang digunakan, termasuk kelas induk (kelas Vehicle) dari kelas Motorcycle
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

// Kelas Motorcycle digunakan untuk mempresentasikan data Motor
// Kelas Motorcycle merupakan kelas turunan dari kelas Vehicle dan kelas komposisi dari kelas Garage & Parking Lot
class Motorcycle : public Vehicle {
    private:
    // Atribut yang digunakan pada kelas Motorcycle terdiri dari jenis motor, dan kapasitas tangki
        string jenis_motor;
        string kapasitas_tangki;

    public:
        // Constructor
        Motorcycle() {

        }

        // Constructor : Overloading
        Motorcycle(string jenis_motor, string nama_kendaraan, string plat_nomor, string merk, string tahun_produksi, string warna) : Vehicle(nama_kendaraan, plat_nomor, merk, tahun_produksi, warna) {
            this->jenis_motor = jenis_motor;
            this->kapasitas_tangki = "";
        }


        // Constructor : Overloading
        Motorcycle(string jenis_motor, string kapasitas_tangki, string nama_kendaraan, string plat_nomor, string merk, string tahun_produksi, string warna) : Vehicle(nama_kendaraan, plat_nomor, merk, tahun_produksi, warna) {
            this->jenis_motor = jenis_motor;
            this->kapasitas_tangki = kapasitas_tangki;
        }

        // Method set untuk set setiap nilai atribut pada kelas Motorcycle
        void setJenisMotor(string jenis_motor) {
            this->jenis_motor = jenis_motor;
        }

        void setKapasitasTangki(string kapasitas_tangki) {
            kapasitas_tangki = kapasitas_tangki;
        }

        // Method get untuk mendapatkan nilai setiap atribut pada kelas Motorcycle
        string getJenisMotor() {
            return jenis_motor;
        }

        string getKapasitasTangki() {
            return kapasitas_tangki;
        }

        // Destructor
        ~Motorcycle() {

        }
};
