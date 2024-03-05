// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include <vector>
#include "Car.cpp"
#include "Motorcycle.cpp"

// Deklarasi namespace
using namespace std;

// Kelas Parking Lot yang digunakan untuk mempresentasikan data Tempat Parkiran (Penyimpanan Kendaraan)
// Kelas Parking Lot merupakan kelas mandiri
class ParkingLot {
    private:
        // Atribut yang digunakan pada kelas Parking Lot terdiri dari kapasitas, dan jumlah kendaraan saat ini.
        // Setiap Parking Lot memiliki mobil dan motor
        string kapasitas;
        string jumlah_sekarang;
        vector<Car> daftarMobil;
        vector<Motorcycle> daftarMotor;

    public:
        // Constructor
        ParkingLot() {

        }

        // Constructor : Overloading
        ParkingLot(string kapasitas) {
            this->kapasitas = kapasitas;
            this->jumlah_sekarang = "";
            this->daftarMobil = {};
            this->daftarMotor = {};
        }

        // Constructor : Overloading
        ParkingLot(string kapasitas, string jumlah_sekarang) {
            this->kapasitas = kapasitas;
            this->jumlah_sekarang = jumlah_sekarang;
            this->daftarMobil = {};
            this->daftarMotor = {};
        }

        // Constructor : Overloading
        ParkingLot(string kapasitas, string jumlah_sekarang, vector<Car> daftarMobil) {
            this->kapasitas = kapasitas;
            this->jumlah_sekarang = jumlah_sekarang;
            this->daftarMobil = daftarMobil;
            this->daftarMotor = {};
        }

        // Constructor : Overloading
        ParkingLot(string kapasitas, string jumlah_sekarang, vector<Motorcycle> daftarMotor) {
            this->kapasitas = kapasitas;
            this->jumlah_sekarang = jumlah_sekarang;
            this->daftarMobil = {};
            this->daftarMotor = daftarMotor;
        }

        // Constructor : Overloading
        ParkingLot(string kapasitas, string jumlah_sekarang, vector<Car> daftarMobil, vector<Motorcycle> daftarMotor) {
            this->kapasitas = kapasitas;
            this->jumlah_sekarang = jumlah_sekarang;
            this->daftarMobil = daftarMobil;
            this->daftarMotor = daftarMotor;
        }

        // Method setter untuk set nilai setiap atribut pada kelas ParkingLot
        void setKapasitas(string kapasitas) {
            this->kapasitas = kapasitas;
        }

        void setJumlahSekarang(string jumlah_sekarang) {
            this->jumlah_sekarang = jumlah_sekarang;
        }

        void setMobil(vector<Car> daftarMobil) {
            this->daftarMobil = daftarMobil;
        }

        void setMotor(vector<Motorcycle> daftarMotor) {
            this->daftarMotor = daftarMotor;
        }

        // Method getter untuk mendapatkan nilai setiap atribut pada kelas ParkingLot
        string getKapasitas() {
            return kapasitas;
        }

        string getJumlahSekarang() {
            return jumlah_sekarang;
        }

        vector<Car> getMobil() {
            return daftarMobil;
        }

        vector<Motorcycle> getMotor() {
            return daftarMotor;
        }

        // Destructor
        ~ParkingLot() {

        }
};
