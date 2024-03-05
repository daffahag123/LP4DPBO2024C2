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

// Kelas Garage yang digunakan untuk mempresentasikan data Garasi (Penyimpanan Kendaraan)
// Kelas Garage merupakan kelas mandiri
class Garage {
    private:
        // Atribut yang digunakan pada kelas Garage terdiri dari nama garasi, dan luas garasi.
        // Setiap Garasi memiliki mobil dan motor
        string nama_garasi;
        string luas_garasi;
        vector<Car> daftarMobil;
        vector<Motorcycle> daftarMotor;

    public:
        // Constructor
        Garage() {

        }

        // Constructor : Overloading
        Garage(string nama_garasi) {
            this->nama_garasi = nama_garasi;
            this->luas_garasi = "";
            this->daftarMobil = {};
            this->daftarMotor = {};
        }

        // Constructor : Overloading
        Garage(string nama_garasi, string luas_garasi) {
            this->nama_garasi = nama_garasi;
            this->luas_garasi = luas_garasi;
            this->daftarMobil = {};
            this->daftarMotor = {};
        }

        // Constructor : Overloading
        Garage(string nama_garasi, string luas_garasi, vector<Car> daftarMobil) {
            this->nama_garasi = nama_garasi;
            this->luas_garasi = luas_garasi;
            this->daftarMobil = daftarMobil;
            this->daftarMotor = {};
        }

        // Constructor : Overloading
        Garage(string nama_garasi, string luas_garasi, vector<Motorcycle> daftarMotor) {
            this->nama_garasi = nama_garasi;
            this->luas_garasi = luas_garasi;
            this->daftarMobil = {};
            this->daftarMotor = daftarMotor;
        }

        // Constructor : Overloading
        Garage(string nama_garasi, string luas_garasi, vector<Car> daftarMobil, vector<Motorcycle> daftarMotor) {
            this->nama_garasi = nama_garasi;
            this->luas_garasi = luas_garasi;
            this->daftarMobil = daftarMobil;
            this->daftarMotor = daftarMotor;
        }

        // Method setter untuk set nilai setiap atribut pada kelas Garage
        void setNamaGarasi(string nama_garasi) {
            this->nama_garasi = nama_garasi;
        }

        void setLuasGarasi(string luas_garasi) {
            this->luas_garasi = luas_garasi;
        }

        void setMobil(vector<Car> daftarMobil) {
            this->daftarMobil = daftarMobil;
        }

        void setMotor(vector<Motorcycle> daftarMotor) {
            this->daftarMotor = daftarMotor;
        }

        // Method getter untuk mendapatkan nilai setiap atribut pada kelas Garage
        string getNamaGarasi() {
            return nama_garasi;
        }

        string getLuasGarasi() {
            return luas_garasi;
        }

        vector<Car> getMobil() {
            return daftarMobil;
        }

        vector<Motorcycle> getMotor() {
            return daftarMotor;
        }

        // Destructor
        ~Garage() {

        }
};
