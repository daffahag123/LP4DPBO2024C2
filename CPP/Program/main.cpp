/* 
    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 4 
    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
*/

// Memasukan library yang digunakan ke dalam fungsi main (program utama)
#include <bits/stdc++.h>
#include "Tabel.cpp"
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"

// Deklarasi namespace
using namespace std;

// Fungsi main() yang digunakan sebagai program utama
int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    // Deklarasi Atribut
    int i, pilih;

    // Vector Daftar Mobil digunakan untuk menyimpan sekumpulan objek mobil pada setiap Garasi / Tempat Parkir
    vector<Car> daftarMobil1;
    vector<Car> daftarMobil2;
    vector<Car> daftarMobil3;

    // Vector Daftar Mobil digunakan untuk menyimpan sekumpulan objek motor pada setiap Garasi / Tempat Parkir
    vector<Motorcycle> daftarMotor1;
    vector<Motorcycle> daftarMotor2;
    vector<Motorcycle> daftarMotor3;

    // Instansiasi objek Mobil
    Car mobil1("4", "4", "Toyota Avanza", "B 1234 AB", "Toyota", "2022", "Hitam");
    Car mobil2("5", "4", "Honda Civic", "B 2345 BC", "Honda", "2023", "Putih");
    Car mobil3("6", "4", "Nissan X-Trail", "B 3456 CD", "Nissan", "2024", "Merah");
    Car mobil4("8", "4", "Mitsubishi Pajero Sport", "D 4567 DE", "Mitsubishi", "2022", "Biru");
    Car mobil5("4", "2", "Ford Fiesta", "D 5678 EF", "Ford", "2023", "Hijau");
    Car mobil6("4", "4", "Chevrolet Traverse", "D 6789 FG", "Chevrolet", "2024", "Kuning");
    Car mobil7("6", "4", "BMW X5", "F 7890 GH", "BMW", "2022", "Abu-abu");
    Car mobil8("4", "4", "Mercedes-Benz C-Class", "F 8901 HI", "Mercedes-Benz", "2023", "Pink");
    Car mobil9("2", "2", "Lamborghini Huracan", "F 9012 JK", "Lamborghini", "2022", "Ungu");

    // Instansiasi objek Motor
    Motorcycle motor1("Skutik", "5 Liter", "Yamaha Mio", "B 1234 AB", "Yamaha", "2020", "Biru");
    Motorcycle motor2("Skutik", "4 Liter", "Honda Beat", "B 2345 BC", "Honda", "2019", "Merah");
    Motorcycle motor3("Sport", "6 Liter", "Suzuki Satria F150", "B 3456 CD", "Suzuki", "2021", "Hitam");
    Motorcycle motor4("Sport", "14 Liter", "Kawasaki Ninja 250", "D 4567 DE", "Kawasaki", "2020", "Hijau");
    Motorcycle motor5("Skutik", "6.6 Liter", "Yamaha NMAX", "D 5678 EF", "Yamaha", "2018", "Putih");
    Motorcycle motor6("Skutik", "8 Liter", "Honda PCX", "D 6789 FG", "Honda", "2022", "Silver");
    Motorcycle motor7("Sport", "11 Liter", "Suzuki GSX-R150", "F 7890 GH", "Suzuki", "2019", "Biru");
    Motorcycle motor8("Sport", "11 Liter", "Yamaha R15", "F 8901 HI", "Yamaha", "2020", "Merah");
    Motorcycle motor9("Sport", "14.5 Liter", "Honda CBR250RR", "F 9012 IJ", "Honda", "2021", "Hitam");

    // Memasukkan beberapa objek mobil ke dalam vector daftarMobil1
    daftarMobil1.push_back(mobil1);
    daftarMobil1.push_back(mobil2);
    daftarMobil1.push_back(mobil3);
    // Memasukkan beberapa objek mobil ke dalam vector daftarMobil2
    daftarMobil2.push_back(mobil4);
    daftarMobil2.push_back(mobil5);
    daftarMobil2.push_back(mobil6);
    // Memasukkan beberapa objek mobil ke dalam vector daftarMobil3
    daftarMobil3.push_back(mobil7);
    daftarMobil3.push_back(mobil8);
    daftarMobil3.push_back(mobil9);

    // Memasukkan beberapa objek motor ke dalam vector daftarMotor1
    daftarMotor1.push_back(motor1);
    daftarMotor1.push_back(motor2);
    daftarMotor1.push_back(motor3);
    // Memasukkan beberapa objek motor ke dalam vector daftarMotor2
    daftarMotor2.push_back(motor4);
    daftarMotor2.push_back(motor5);
    daftarMotor2.push_back(motor6);
    // Memasukkan beberapa objek motor ke dalam vector daftarMotor3
    daftarMotor3.push_back(motor7);
    daftarMotor3.push_back(motor8);
    daftarMotor3.push_back(motor9);

    // Instansiasi objek Garasi
    Garage garasi1("Garasi Toko", "125", daftarMobil1, daftarMotor1); 
    Garage garasi2("Garasi Rumah", "240", daftarMobil3, daftarMotor3);

    // Instansiasi objek Tempat Parkir
    ParkingLot parkiran1("10", "3", daftarMobil2);
    ParkingLot parkiran2("20", "3", daftarMotor2);

    // Output
    do {
        // Menampilkan Pilihan yang tersedia
        cout << endl;
        cout << "==================================================================" << endl;
        cout << "|                       DAFTAR KENDARAAN SAYA                    |" << endl;
        cout << "==================================================================" << endl;
        cout << "| 1. Tampilkan Daftar Kendaraan Mobil & Motor Dalam Garasi Toko  |" << endl;
        cout << "| 2. Tampilkan Daftar Kendaraan Mobil & Motor Dalam Garasi Rumah |" << endl;
        cout << "| 3. Tampilkan Daftar Kendaraan Dalam Parkiran Mobil Apartemen   |" << endl;
        cout << "| 4. Tampilkan Daftar Kendaraan Dalam Parkiran Motor Apartemen   |" << endl;
        cout << "| 5. Keluar                                                      |" << endl;
        cout << "==================================================================" << "\n\n";

        // Membaca inputan pilih nomor
        cout << "Pilih nomor: ";
        cin >> pilih;

        // Memeriksa apakah inputan berada di luar rentang yang valid 
        if(pilih > 5 && pilih == 0) {
            cout << "Input yang diminta tidak ada" << '\n';
        }

        if(pilih == 1) {
            // Menampilkan Informasi Kendaraan pada Garasi Toko 
            cout << endl;
            cout << "=============================" << endl;
            cout << "| Nama Garasi | Luas Garasi |" << endl;
            cout << "=============================" << endl;
            cout << "| " << garasi1.getNamaGarasi() << " | " << garasi1.getLuasGarasi() << "m^2" << "      |" << endl;
            cout << "=============================" << "\n\n";

            // Instansiasi objek tabel Mobil
            Tabel tabMobil;
            tabMobil.setBaris(garasi1.getMobil().size()+1);    // Mengisi nilai baris tabel
            tabMobil.setKolom(7);                              // Mengisi nilai kolom tabel

            // Deklarasi array dua dimensi untuk menyimpan vector mobil
            string arrStr[garasi1.getMobil().size()+1][7];

            // Isi array pertama dengan judul pada setiap kolom
            arrStr[0][0] = "Nama Kendaraan"; 
            arrStr[0][1] = "Plat Nomor";
            arrStr[0][2] = "Merk";
            arrStr[0][3] = "Tahun Produksi"; 
            arrStr[0][4] = "Warna"; 
            arrStr[0][5] = "Jumlah Kursi"; 
            arrStr[0][6] = "Jumlah Pintu"; 

            // Melakukan pengisian pada setiap elemen array 
            for(i = 0; i < garasi1.getMobil().size(); i++) {
                arrStr[i+1][0] =  garasi1.getMobil().at(i).getNamaKendaraan();
                arrStr[i+1][1] =  garasi1.getMobil().at(i).getPlatNomor();
                arrStr[i+1][2] =  garasi1.getMobil().at(i).getMerk();
                arrStr[i+1][3] =  garasi1.getMobil().at(i).getTahunProduksi();
                arrStr[i+1][4] =  garasi1.getMobil().at(i).getWarna();
                arrStr[i+1][5] =  garasi1.getMobil().at(i).getJumlahKursi();
                arrStr[i+1][6] =  garasi1.getMobil().at(i).getJumlahPintu();
            }

            // Menampilkan Daftar Mobil
            cout << "===============================================================================================" << endl;
            cout << "|                                     Daftar Kendaraan Mobil                                  |" << endl;
            cout << "===============================================================================================" << endl;
            tabMobil.buatTabel(arrStr, tabMobil.getBaris(), tabMobil.getKolom());

            // Instansiasi objek tabel motor
            Tabel tabMotor;
            tabMotor.setBaris(garasi1.getMotor().size()+1);    // Mengisi nilai baris tabel
            tabMotor.setKolom(7);                              // Mengisi nilai kolom tabel

            // Deklarasi array dua dimensi untuk menyimpan vector motor
            string arrStr2[garasi1.getMotor().size()+1][7];

            // Isi array pertama dengan judul pada setiap kolom
            arrStr2[0][0] = "Nama Kendaraan"; 
            arrStr2[0][1] = "Plat Nomor";
            arrStr2[0][2] = "Merk";
            arrStr2[0][3] = "Tahun Produksi"; 
            arrStr2[0][4] = "Warna"; 
            arrStr2[0][5] = "Jenis Motor"; 
            arrStr2[0][6] = "Kapasitas Tangki"; 

            // Melakukan pengisian pada setiap elemen array 
            for(int i = 0; i < garasi1.getMotor().size(); i++) {
                arrStr2[i+1][0] =  garasi1.getMotor().at(i).getNamaKendaraan();
                arrStr2[i+1][1] =  garasi1.getMotor().at(i).getPlatNomor();
                arrStr2[i+1][2] =  garasi1.getMotor().at(i).getMerk();
                arrStr2[i+1][3] =  garasi1.getMotor().at(i).getTahunProduksi();
                arrStr2[i+1][4] =  garasi1.getMotor().at(i).getWarna();
                arrStr2[i+1][5] =  garasi1.getMotor().at(i).getJenisMotor();
                arrStr2[i+1][6] =  garasi1.getMotor().at(i).getKapasitasTangki();
            }

            // Menampilkan Daftar Motor
            cout << endl;
            cout << "======================================================================================================" << endl;
            cout << "|                                     Daftar Kendaraan Motor                                         |" << endl;
            cout << "======================================================================================================" << endl;
            tabMotor.buatTabel(arrStr2, tabMotor.getBaris(), tabMotor.getKolom());

        } else if(pilih == 2) {
            // Menampilkan Informasi Kendaraan pada Garasi Rumah 
            cout << endl;
            cout << "==============================" << endl;
            cout << "| Nama Garasi  | Luas Garasi |" << endl;
            cout << "==============================" << endl;
            cout << "| " << garasi2.getNamaGarasi() << " | " << garasi2.getLuasGarasi() << "m^2" << "      |" << endl;
            cout << "==============================" << "\n\n";

            // Instansiasi objek tabel Mobil
            Tabel tabMobil;
            tabMobil.setBaris(garasi2.getMobil().size()+1);    // Mengisi nilai baris tabel
            tabMobil.setKolom(7);                              // Mengisi nilai kolom tabel

            // Deklarasi array dua dimensi untuk menyimpan vector mobil
            string arrStr[garasi2.getMobil().size()+1][7];

            // Isi array pertama dengan judul pada setiap kolom
            arrStr[0][0] = "Nama Kendaraan"; 
            arrStr[0][1] = "Plat Nomor";
            arrStr[0][2] = "Merk";
            arrStr[0][3] = "Tahun Produksi"; 
            arrStr[0][4] = "Warna"; 
            arrStr[0][5] = "Jumlah Kursi"; 
            arrStr[0][6] = "Jumlah Pintu"; 

            // Melakukan pengisian pada setiap elemen array 
            for(i = 0; i < garasi2.getMobil().size(); i++) {
                arrStr[i+1][0] =  garasi2.getMobil().at(i).getNamaKendaraan();
                arrStr[i+1][1] =  garasi2.getMobil().at(i).getPlatNomor();
                arrStr[i+1][2] =  garasi2.getMobil().at(i).getMerk();
                arrStr[i+1][3] =  garasi2.getMobil().at(i).getTahunProduksi();
                arrStr[i+1][4] =  garasi2.getMobil().at(i).getWarna();
                arrStr[i+1][5] =  garasi2.getMobil().at(i).getJumlahKursi();
                arrStr[i+1][6] =  garasi2.getMobil().at(i).getJumlahPintu();
            }

            // Menampilkan Daftar Mobil
            cout << "===============================================================================================================" << endl;
            cout << "|                                    Daftar Kendaraan Mobil                                                   |" << endl;
            cout << "===============================================================================================================" << endl;
            tabMobil.buatTabel(arrStr, tabMobil.getBaris(), tabMobil.getKolom());

            // Instansiasi objek tabel motor
            Tabel tabMotor;
            tabMotor.setBaris(garasi2.getMotor().size()+1);    // Mengisi nilai baris tabel
            tabMotor.setKolom(7);                              // Mengisi nilai kolom tabel

            // Deklarasi array dua dimensi untuk menyimpan vector motor
            string arrStr2[garasi2.getMotor().size()+1][7];

            // Isi array pertama dengan judul pada setiap kolom
            arrStr2[0][0] = "Nama Kendaraan"; 
            arrStr2[0][1] = "Plat Nomor";
            arrStr2[0][2] = "Merk";
            arrStr2[0][3] = "Tahun Produksi"; 
            arrStr2[0][4] = "Warna"; 
            arrStr2[0][5] = "Jenis Motor"; 
            arrStr2[0][6] = "Kapasitas Tangki"; 

            // Melakukan pengisian pada setiap elemen array 
            for(int i = 0; i < garasi2.getMotor().size(); i++) {
                arrStr2[i+1][0] =  garasi2.getMotor().at(i).getNamaKendaraan();
                arrStr2[i+1][1] =  garasi2.getMotor().at(i).getPlatNomor();
                arrStr2[i+1][2] =  garasi2.getMotor().at(i).getMerk();
                arrStr2[i+1][3] =  garasi2.getMotor().at(i).getTahunProduksi();
                arrStr2[i+1][4] =  garasi2.getMotor().at(i).getWarna();
                arrStr2[i+1][5] =  garasi2.getMotor().at(i).getJenisMotor();
                arrStr2[i+1][6] =  garasi2.getMotor().at(i).getKapasitasTangki();
            }

            // Menampilkan Daftar Motor
            cout << endl;
            cout << "===================================================================================================" << endl;
            cout << "|                                    Daftar Kendaraan Motor                                       |" << endl;
            cout << "===================================================================================================" << endl;
            tabMotor.buatTabel(arrStr2, tabMotor.getBaris(), tabMotor.getKolom());
        } else if(pilih == 3) {
            // Menampilkan Informasi Kendaraan Bermobil pada Parkiran Apartemen
            cout << endl;
            cout << "===========================================" << endl;
            cout << "| Kapasitas Parkiran | Kendaraan Saat Ini |" << endl;
            cout << "===========================================" << endl;
            cout << "|      " << parkiran1.getKapasitas() << " Jumlah     |      " << parkiran1.getJumlahSekarang() << " Jumlah      |" << endl;
            cout << "===========================================" << "\n\n";

            // Instansiasi objek tabel Mobil
            Tabel tabMobil;
            tabMobil.setBaris(parkiran1.getMobil().size()+1);    // Mengisi nilai baris tabel
            tabMobil.setKolom(7);                              // Mengisi nilai kolom tabel

            // Deklarasi array dua dimensi untuk menyimpan vector mobil
            string arrStr[parkiran1.getMobil().size()+1][7];

            // Isi array pertama dengan judul pada setiap kolom
            arrStr[0][0] = "Nama Kendaraan"; 
            arrStr[0][1] = "Plat Nomor";
            arrStr[0][2] = "Merk";
            arrStr[0][3] = "Tahun Produksi"; 
            arrStr[0][4] = "Warna"; 
            arrStr[0][5] = "Jumlah Kursi"; 
            arrStr[0][6] = "Jumlah Pintu"; 

            // Melakukan pengisian pada setiap elemen array 
            for(i = 0; i < parkiran1.getMobil().size(); i++) {
                arrStr[i+1][0] =  parkiran1.getMobil().at(i).getNamaKendaraan();
                arrStr[i+1][1] =  parkiran1.getMobil().at(i).getPlatNomor();
                arrStr[i+1][2] =  parkiran1.getMobil().at(i).getMerk();
                arrStr[i+1][3] =  parkiran1.getMobil().at(i).getTahunProduksi();
                arrStr[i+1][4] =  parkiran1.getMobil().at(i).getWarna();
                arrStr[i+1][5] =  parkiran1.getMobil().at(i).getJumlahKursi();
                arrStr[i+1][6] =  parkiran1.getMobil().at(i).getJumlahPintu();
            }

            // Menampilkan Daftar Mobil
            cout << "=============================================================================================================" << endl;
            cout << "|                                            Daftar Kendaraan Mobil                                         |" << endl;
            cout << "=============================================================================================================" << endl;
            tabMobil.buatTabel(arrStr, tabMobil.getBaris(), tabMobil.getKolom());

        } else if(pilih == 4) {
            // Menampilkan Informasi Kendaraan Bermotor pada Parkiran Apartemen
            cout << endl;
            cout << "===========================================" << endl;
            cout << "| Kapasitas Parkiran | Kendaraan Saat Ini |" << endl;
            cout << "===========================================" << endl;
            cout << "|      " << parkiran2.getKapasitas() << " Jumlah     |      " << parkiran2.getJumlahSekarang() << " Jumlah      |" << endl;
            cout << "===========================================" << "\n\n";

            // Instansiasi objek tabel motor
            Tabel tabMotor;
            tabMotor.setBaris(parkiran2.getMotor().size()+1);    // Mengisi nilai baris tabel
            tabMotor.setKolom(7);                              // Mengisi nilai kolom tabel

            // Deklarasi array dua dimensi untuk menyimpan vector motor
            string arrStr2[parkiran2.getMotor().size()+1][7];

            // Isi array pertama dengan judul pada setiap kolom
            arrStr2[0][0] = "Nama Kendaraan"; 
            arrStr2[0][1] = "Plat Nomor";
            arrStr2[0][2] = "Merk";
            arrStr2[0][3] = "Tahun Produksi"; 
            arrStr2[0][4] = "Warna"; 
            arrStr2[0][5] = "Jenis Motor"; 
            arrStr2[0][6] = "Kapasitas Tangki"; 

            // Melakukan pengisian pada setiap elemen array 
            for(int i = 0; i < parkiran2.getMotor().size(); i++) {
                arrStr2[i+1][0] =  parkiran2.getMotor().at(i).getNamaKendaraan();
                arrStr2[i+1][1] =  parkiran2.getMotor().at(i).getPlatNomor();
                arrStr2[i+1][2] =  parkiran2.getMotor().at(i).getMerk();
                arrStr2[i+1][3] =  parkiran2.getMotor().at(i).getTahunProduksi();
                arrStr2[i+1][4] =  parkiran2.getMotor().at(i).getWarna();
                arrStr2[i+1][5] =  parkiran2.getMotor().at(i).getJenisMotor();
                arrStr2[i+1][6] =  parkiran2.getMotor().at(i).getKapasitasTangki();
            }

            // Menampilkan Daftar Motor
            cout << "=========================================================================================================" << endl;
            cout << "|                                      Daftar Kendaraan Motor                                           |" << endl;
            cout << "=========================================================================================================" << endl;
            tabMotor.buatTabel(arrStr2, tabMotor.getBaris(), tabMotor.getKolom());
        }
    } while(pilih != 5);

    // Menampilkan pesan keluar dari program
    cout << endl;
    cout << " Terima Kasih Sudah Melihat Koleksi Kendaraan Saya :) " << endl;
    cout << " Semoga Kalian Dilancarkan Rezeki-Nya, Aaamiiinn..... " << endl;

    return 0;
}