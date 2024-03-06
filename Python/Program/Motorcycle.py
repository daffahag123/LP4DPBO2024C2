# Mengimpor kelas Vehicle
from Vehicle import Vehicle

# Kelas Motorcycle digunakan untuk mempresentasikan data Motor
# Kelas Motorcycle merupakan kelas turunan dari kelas Vehicle dan kelas komposisi dari kelas Garage & Parking Lot
class Motorcycle(Vehicle):
    # Atribut yang digunakan pada kelas Motorcycle terdiri dari jenis motor, dan kapasitas tangki
    # Constructor
    def __init__(self, jenis_motor="", kapasitas_tangki="", nama_kendaraan="", plat_nomor="", merk="", tahun_produksi="", warna=""):
        super().__init__(nama_kendaraan, plat_nomor, merk, tahun_produksi, warna)
        self.jenis_motor = jenis_motor
        self.kapasitas_tangki = kapasitas_tangki

    # Method setter untuk setiap atribut pada kelas Motorcycle
    def setJenisMotor(self, jenis_motor):
        self.jenis_motor = jenis_motor

    def setKapasitasTangki(self, kapasitas_tangki):
        self.kapasitas_tangki = kapasitas_tangki

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Motorcycle
    def getJenisMotor(self):
        return self.jenis_motor

    def getKapasitasTangki(self):
        return self.kapasitas_tangki
