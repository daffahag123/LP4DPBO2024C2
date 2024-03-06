# Mengimpor kelas Car dan Motorcycle
from Car import Car
from Motorcycle import Motorcycle

# Kelas ParkingLot yang digunakan untuk mempresentasikan data Tempat Parkir (Penyimpanan Kendaraan)
# Kelas ParkingLot merupakan kelas mandiri
class ParkingLot:
    # Atribut yang digunakan pada kelas Parking Lot terdiri dari kapasitas, dan jumlah kendaraan saat ini.
    # Setiap Parking Lot memiliki mobil dan motor
        
    # Constructor
    def __init__(self, kapasitas="", jumlah_sekarang="", daftarMobil=[], daftarMotor=[]):
        self.kapasitas = kapasitas
        self.jumlah_sekarang = jumlah_sekarang
        self.daftarMobil = daftarMobil
        self.daftarMotor = daftarMotor

    # Method setter untuk set nilai setiap atribut pada kelas ParkingLot
    def setKapasitas(self, kapasitas):
        self.kapasitas = kapasitas

    def setJumlahSekarang(self, jumlah_sekarang):
        self.jumlah_sekarang = jumlah_sekarang

    def setMobil(self, daftarMobil):
        self.daftarMobil = daftarMobil

    def setMotor(self, daftarMotor):
        self.daftarMotor = daftarMotor

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas ParkingLot
    def getKapasitas(self):
        return self.kapasitas

    def getJumlahSekarang(self):
        return self.jumlah_sekarang

    def getMobil(self):
        return self.daftarMobil

    def getMotor(self):
        return self.daftarMotor
