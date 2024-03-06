# Mengimpor kelas Car dan Motorcycle
from Car import Car
from Motorcycle import Motorcycle

# Kelas Garage yang digunakan untuk mempresentasikan data Garasi (Penyimpanan Kendaraan)
# Kelas Garage merupakan kelas mandiri
class Garage:
    # Atribut yang digunakan pada kelas Garage terdiri dari nama garasi, dan luas garasi.
    # Setiap Garasi memiliki mobil dan motor
    
    # Constructor
    def __init__(self, nama_garasi="", luas_garasi="", daftarMobil=[], daftarMotor=[]):
        self.nama_garasi = nama_garasi
        self.luas_garasi = luas_garasi
        self.daftarMobil = daftarMobil
        self.daftarMotor = daftarMotor

    # Method setter untuk set nilai setiap atribut pada kelas Garage
    def setNamaGarasi(self, nama_garasi):
        self.nama_garasi = nama_garasi

    def setLuasGarasi(self, luas_garasi):
        self.luas_garasi = luas_garasi

    def setMobil(self, daftarMobil):
        self.daftarMobil = daftarMobil

    def setMotor(self, daftarMotor):
        self.daftarMotor = daftarMotor

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Garage
    def getNamaGarasi(self):
        return self.nama_garasi

    def getLuasGarasi(self):
        return self.luas_garasi

    def getMobil(self):
        return self.daftarMobil

    def getMotor(self):
        return self.daftarMotor
