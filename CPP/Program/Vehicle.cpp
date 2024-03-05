// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukan library yang digunakan
#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

// Kelas Vehicle digunakan untuk mempresentasikan data Kendaraan
// Kelas Vehicle merupakan kelas induk dari kelas Car dan kelas Motorcycle
class Vehicle {
    private:
        // Atribut yang digunakan pada kelas Vehicle terdiri dari nama kendaraan, plat nomor, merk, tahun produksi, dan warna. 
        string nama_kendaraan;
        string plat_nomor;
        string merk;
        string tahun_produksi;
        string warna;

    public:
        // Constructor
        Vehicle() {

        }

        // Constructor : Overloading
        Vehicle(string nama_kendaraan) {
            this->nama_kendaraan = nama_kendaraan;
            this->plat_nomor = "";
            this->merk = "";
            this->tahun_produksi = "";
            this->warna = "";
        }

        // Constructor : Overloading
        Vehicle(string nama_kendaraan, string plat_nomor) {
            this->nama_kendaraan = nama_kendaraan;
            this->plat_nomor = plat_nomor;
            this->merk = "";
            this->tahun_produksi = "";
            this->warna = "";
        }

        // Constructor : Overloading
        Vehicle(string nama_kendaraan, string plat_nomor, string merk) {
            this->nama_kendaraan = nama_kendaraan;
            this->plat_nomor = plat_nomor;
            this->merk = merk;
            this->tahun_produksi = "";
            this->warna = "";
        }

        // Constructor : Overloading
        Vehicle(string nama_kendaraan, string plat_nomor, string merk, string tahun_produksi) {
            this->nama_kendaraan = nama_kendaraan;
            this->plat_nomor = plat_nomor;
            this->merk = merk;
            this->tahun_produksi = tahun_produksi;
            this->warna = "";
        }

        // Constructor : Overloading
        Vehicle(string nama_kendaraan, string plat_nomor, string merk, string tahun_produksi, string warna) {
            this->nama_kendaraan = nama_kendaraan;
            this->plat_nomor = plat_nomor;
            this->merk = merk;
            this->tahun_produksi = tahun_produksi;
            this->warna = warna;
        }

        // Method setter untuk set nilai setiap atribut pada kelas Vehicle
        void setNamaKendaraan(string nama_kendaraan) {
            this->nama_kendaraan = nama_kendaraan;
        }

        void setPlatNomor(string plat_nomor) {
            this->plat_nomor = plat_nomor;
        }

        void setMerk(string merk) {
            this->merk = merk;
        }

        void setTahunProduksi(string tahun_produksi) {
            this->tahun_produksi = tahun_produksi;
        }

        void setWarna(string warna) {
            this->warna = warna;
        }

        // Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
        string getNamaKendaraan() {
            return nama_kendaraan;
        }
        
        string getPlatNomor() {
            return plat_nomor;
        }

        string getMerk() {
            return merk;
        }

        string getTahunProduksi() {
            return tahun_produksi;
        }

        string getWarna() {
            return warna;
        }

        // Destructor
        ~Vehicle() {

        }
};
