# 
#    Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 4 
#    dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, untuk keberkahan-Nya
#    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.
#

from Tabel import Tabel
from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

# List Daftar Mobil digunakan untuk menyimpan sekumpulan objek mobil pada setiap Garasi / Tempat Parkir
daftarMobil1 = []
daftarMobil2 = []
daftarMobil3 = []

# List Daftar Mobil digunakan untuk menyimpan sekumpulan objek motor pada setiap Garasi / Tempat Parkir
daftarMotor1 = []
daftarMotor2 = []
daftarMotor3 = []

# Instansiasi objek Mobil
mobil1 = Car("4", "4", "Toyota Avanza", "B 1234 AB", "Toyota", "2022", "Hitam")
mobil2 = Car("5", "4", "Honda Civic", "B 2345 BC", "Honda", "2023", "Putih")
mobil3 = Car("6", "4", "Nissan X-Trail", "B 3456 CD", "Nissan", "2024", "Merah")
mobil4 = Car("8", "4", "Mitsubishi Pajero Sport", "D 4567 DE", "Mitsubishi", "2022", "Biru")
mobil5 = Car("4", "2", "Ford Fiesta", "D 5678 EF", "Ford", "2023", "Hijau")
mobil6 = Car("4", "4", "Chevrolet Traverse", "D 6789 FG", "Chevrolet", "2024", "Kuning")
mobil7 = Car("6", "4", "BMW X5", "F 7890 GH", "BMW", "2022", "Abu-abu")
mobil8 = Car("4", "4", "Mercedes-Benz C-Class", "F 8901 HI", "Mercedes-Benz", "2023", "Pink")
mobil9 = Car("2", "2", "Lamborghini Huracan", "F 9012 JK", "Lamborghini", "2022", "Ungu")

# Instansiasi objek Motor
motor1 = Motorcycle("Skutik", "5 Liter", "Yamaha Mio", "B 1234 AB", "Yamaha", "2020", "Biru")
motor2 = Motorcycle("Skutik", "4 Liter", "Honda Beat", "B 2345 BC", "Honda", "2019", "Merah")
motor3 = Motorcycle("Sport", "6 Liter", "Suzuki Satria F150", "B 3456 CD", "Suzuki", "2021", "Hitam")
motor4 = Motorcycle("Sport", "14 Liter", "Kawasaki Ninja 250", "D 4567 DE", "Kawasaki", "2020", "Hijau")
motor5 = Motorcycle("Skutik", "6.6 Liter", "Yamaha NMAX", "D 5678 EF", "Yamaha", "2018", "Putih")
motor6 = Motorcycle("Skutik", "8 Liter", "Honda PCX", "D 6789 FG", "Honda", "2022", "Silver")
motor7 = Motorcycle("Sport", "11 Liter", "Suzuki GSX-R150", "F 7890 GH", "Suzuki", "2019", "Biru")
motor8 = Motorcycle("Sport", "11 Liter", "Yamaha R15", "F 8901 HI", "Yamaha", "2020", "Merah")
motor9 = Motorcycle("Sport", "14.5 Liter", "Honda CBR250RR", "F 9012 IJ", "Honda", "2021", "Hitam")

# Memasukkan beberapa objek mobil ke dalam list daftarMobil1
daftarMobil1.extend([mobil1, mobil2, mobil3])
# Memasukkan beberapa objek mobil ke dalam list daftarMobil2
daftarMobil2.extend([mobil4, mobil5, mobil6])
# Memasukkan beberapa objek mobil ke dalam list daftarMobil3
daftarMobil3.extend([mobil7, mobil8, mobil9])

# Memasukkan beberapa objek motor ke dalam list daftarMotor1
daftarMotor1.extend([motor1, motor2, motor3])
# Memasukkan beberapa objek motor ke dalam list daftarMotor2
daftarMotor2.extend([motor4, motor5, motor6])
# Memasukkan beberapa objek motor ke dalam list daftarMotor3
daftarMotor3.extend([motor7, motor8, motor9])

# Instansiasi objek Garasi
garasi1 = Garage("Garasi Toko", "125", daftarMobil1, daftarMotor1)
garasi2 = Garage("Garasi Rumah", "240", daftarMobil3, daftarMotor3)

parkiran1 = ParkingLot("10", "3", daftarMobil=daftarMobil2)
parkiran2 = ParkingLot("20", "3", daftarMotor=daftarMotor2)

# Deklarasi atribut
pilih = 0

while pilih != 5:
    # Menampilkan Pilihan yang tersedia
    print("\n==================================================================")
    print("|                       DAFTAR KENDARAAN SAYA                    |")
    print("==================================================================")
    print("| 1. Tampilkan Daftar Kendaraan Mobil & Motor Dalam Garasi Toko  |")
    print("| 2. Tampilkan Daftar Kendaraan Mobil & Motor Dalam Garasi Rumah |")
    print("| 3. Tampilkan Daftar Kendaraan Dalam Parkiran Mobil Apartemen   |")
    print("| 4. Tampilkan Daftar Kendaraan Dalam Parkiran Motor Apartemen   |")
    print("| 5. Keluar                                                      |")
    print("==================================================================\n")

    # Membaca inputan pilih nomor
    pilih = int(input("Pilih nomor: "))

    # Memeriksa apakah inputan berada di luar rentang yang valid 
    if pilih > 5 and pilih == 0:
        print("Input yang diminta tidak ada")

    if pilih == 1:
        # Menampilkan Informasi Kendaraan pada Garasi Toko
        print("\n=============================")
        print("| Nama Garasi | Luas Garasi |")
        print("=============================")
        print("|", garasi1.getNamaGarasi(), "|", garasi1.getLuasGarasi() + "m^2      |")
        print("=============================\n")

        # Instansiasi objek tabel mobil
        tabMobil = Tabel()
        tabMobil.setBaris(len(garasi1.getMobil()) + 1)  
        tabMobil.setKolom(7)  
        
        # Deklarasi array dua dimensi untuk menyimpan list mobil
        # Isi array pertama dengan judul pada setiap kolom
        arrStr = [["Nama Kendaraan", "Plat Nomor", "Merk", "Tahun Produksi", "Warna", "Jumlah Kursi", "Jumlah Pintu"]]
        
        # Melakukan pengisian pada setiap elemen array
        for Mobil in garasi1.getMobil():
            arrStr.append([Mobil.getNamaKendaraan(), Mobil.getPlatNomor(), Mobil.getMerk(), Mobil.getTahunProduksi(), Mobil.getWarna(), Mobil.getJumlahKursi(), Mobil.getJumlahPintu()])

        # Menampilkan Daftar Mobil
        print("===============================================================================================")
        print("|                                     Daftar Kendaraan Mobil                                  |")
        print("===============================================================================================")
        tabMobil.buatTabel(arrStr, tabMobil.getBaris(), tabMobil.getKolom())
        
        # Instansiasi objek tabel motor
        tabMotor = Tabel()
        tabMotor.setBaris(len(garasi1.getMotor()) + 1)  
        tabMotor.setKolom(7)  
        
        # Deklarasi array dua dimensi untuk menyimpan list motor
        # Isi array pertama dengan judul pada setiap kolom
        arrStr2 = [["Nama Kendaraan", "Plat Nomor", "Merk", "Tahun Produksi", "Warna", "Jenis Motor", "Kapasitas Tangki"]]
        
        # Melakukan pengisian pada setiap elemen array
        for Motor in garasi1.getMotor():
            arrStr2.append([Motor.getNamaKendaraan(), Motor.getPlatNomor(), Motor.getMerk(), Motor.getTahunProduksi(), Motor.getWarna(), Motor.getJenisMotor(), Motor.getKapasitasTangki()])

        # Menampilkan Daftar Motor
        print("\n======================================================================================================")
        print("|                                     Daftar Kendaraan Motor                                         |")
        print("======================================================================================================")
        tabMotor.buatTabel(arrStr2, tabMotor.getBaris(), tabMotor.getKolom())

    if pilih == 2:
        # Menampilkan Informasi Kendaraan pada Garasi Rumah
        print("\n==============================")
        print("| Nama Garasi  | Luas Garasi |")
        print("==============================")
        print("|", garasi2.getNamaGarasi(), "|", garasi2.getLuasGarasi() + "m^2      |")
        print("==============================\n")

        # Instansiasi objek tabel mobil
        tabMobil = Tabel()
        tabMobil.setBaris(len(garasi2.getMobil()) + 1)  
        tabMobil.setKolom(7)  
        
        # Deklarasi array dua dimensi untuk menyimpan list mobil
        # Isi array pertama dengan judul pada setiap kolom
        arrStr = [["Nama Kendaraan", "Plat Nomor", "Merk", "Tahun Produksi", "Warna", "Jumlah Kursi", "Jumlah Pintu"]]
        
        # Melakukan pengisian pada setiap elemen array
        for Mobil in garasi2.getMobil():
            arrStr.append([Mobil.getNamaKendaraan(), Mobil.getPlatNomor(), Mobil.getMerk(), Mobil.getTahunProduksi(), Mobil.getWarna(), Mobil.getJumlahKursi(), Mobil.getJumlahPintu()])

        # Menampilkan Daftar Mobil
        print("===============================================================================================================")
        print("|                                     Daftar Kendaraan Mobil                                                  |")
        print("===============================================================================================================")
        tabMobil.buatTabel(arrStr, tabMobil.getBaris(), tabMobil.getKolom())
        
        # Instansiasi objek tabel motor
        tabMotor = Tabel()
        tabMotor.setBaris(len(garasi2.getMotor()) + 1)  
        tabMotor.setKolom(7)  
        
        # Deklarasi array dua dimensi untuk menyimpan list motor
        # Isi array pertama dengan judul pada setiap kolom
        arrStr2 = [["Nama Kendaraan", "Plat Nomor", "Merk", "Tahun Produksi", "Warna", "Jenis Motor", "Kapasitas Tangki"]]
        
        # Melakukan pengisian pada setiap elemen array
        for Motor in garasi2.getMotor():
            arrStr2.append([Motor.getNamaKendaraan(), Motor.getPlatNomor(), Motor.getMerk(), Motor.getTahunProduksi(), Motor.getWarna(), Motor.getJenisMotor(), Motor.getKapasitasTangki()])

        # Menampilkan Daftar Motor
        print("\n===================================================================================================")
        print("|                                     Daftar Kendaraan Motor                                      |")
        print("===================================================================================================")
        tabMotor.buatTabel(arrStr2, tabMotor.getBaris(), tabMotor.getKolom())
        
    if pilih == 3:
        # Menampilkan Informasi Kendaraan Bermobil pada Parkiran Apartemen
        print()
        print("===========================================")
        print("| Kapasitas Parkiran | Kendaraan Saat Ini |")
        print("===========================================")
        print("|      " + str(parkiran1.getKapasitas()) + " Jumlah     |      " + str(parkiran1.getJumlahSekarang()) + " Jumlah      |")
        print("===========================================")
        print()
        
        # Instansiasi objek tabel mobil
        tabMobil = Tabel()
        tabMobil.setBaris(len(parkiran1.getMobil()) + 1)  
        tabMobil.setKolom(7)  
        
        # Deklarasi array dua dimensi untuk menyimpan list mobil
        # Isi array pertama dengan judul pada setiap kolom
        arrStr = [["Nama Kendaraan", "Plat Nomor", "Merk", "Tahun Produksi", "Warna", "Jumlah Kursi", "Jumlah Pintu"]]
        
        # Melakukan pengisian pada setiap elemen array
        for Mobil in parkiran1.getMobil():
            arrStr.append([Mobil.getNamaKendaraan(), Mobil.getPlatNomor(), Mobil.getMerk(), Mobil.getTahunProduksi(), Mobil.getWarna(), Mobil.getJumlahKursi(), Mobil.getJumlahPintu()])

        # Menampilkan Daftar Mobil
        print("=============================================================================================================")
        print("|                                     Daftar Kendaraan Mobil                                                |")
        print("=============================================================================================================")
        tabMobil.buatTabel(arrStr, tabMobil.getBaris(), tabMobil.getKolom())
        
    if pilih == 4:
        # Menampilkan Informasi Kendaraan Bermobil pada Parkiran Apartemen
        print()
        print("===========================================")
        print("| Kapasitas Parkiran | Kendaraan Saat Ini |")
        print("===========================================")
        print("|      " + str(parkiran2.getKapasitas()) + " Jumlah     |      " + str(parkiran2.getJumlahSekarang()) + " Jumlah      |")
        print("===========================================")
        print()
        
        # Instansiasi objek tabel motor
        tabMotor = Tabel()
        tabMotor.setBaris(len(parkiran2.getMotor()) + 1)  
        tabMotor.setKolom(7)  
        
        # Deklarasi array dua dimensi untuk menyimpan list motor
        # Isi array pertama dengan judul pada setiap kolom
        arrStr2 = [["Nama Kendaraan", "Plat Nomor", "Merk", "Tahun Produksi", "Warna", "Jenis Motor", "Kapasitas Tangki"]]
        
        # Melakukan pengisian pada setiap elemen array
        for Motor in parkiran2.getMotor():
            arrStr2.append([Motor.getNamaKendaraan(), Motor.getPlatNomor(), Motor.getMerk(), Motor.getTahunProduksi(), Motor.getWarna(), Motor.getJenisMotor(), Motor.getKapasitasTangki()])

        # Menampilkan Daftar Motor
        print("=========================================================================================================")
        print("|                                     Daftar Kendaraan Motor                                            |")
        print("=========================================================================================================")
        tabMotor.buatTabel(arrStr2, tabMotor.getBaris(), tabMotor.getKolom())        

# Menampilkan pesan keluar dari program
print("\n Terima Kasih Sudah Melihat Koleksi Kendaraan Saya :) ")
print(" Semoga Kalian Dilancarkan Rezeki-Nya, Aaamiiinn..... ")
        
        
        
    

       


    