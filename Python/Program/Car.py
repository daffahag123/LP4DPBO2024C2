# Mengimpor kelas Vehicle
from Vehicle import Vehicle

# Kelas Car digunakan untuk mempresentasikan data Mobil
# Kelas Car merupakan kelas turunan dari kelas Vehicle dan kelas komposisi dari kelas Garage & Parking Lot
class Car(Vehicle):
    # Atribut yang digunakan pada kelas Car terdiri dari jumlah kursi, dan jumlah pintu
    # Constructor
    def __init__(self, jumlah_kursi="", jumlah_pintu="", nama_kendaraan="", plat_nomor="", merk="", tahun_produksi="", warna=""):
        super().__init__(nama_kendaraan, plat_nomor, merk, tahun_produksi, warna)
        self.jumlah_kursi = jumlah_kursi
        self.jumlah_pintu = jumlah_pintu

    # Method setter untuk setiap atribut pada kelas Car
    def setJumlahKursi(self, jumlah_kursi):
        self.jumlah_kursi = jumlah_kursi

    def setJumlahPintu(self, jumlah_pintu):
        self.jumlah_pintu = jumlah_pintu

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Car
    def getJumlahKursi(self):
        return self.jumlah_kursi

    def getJumlahPintu(self):
        return self.jumlah_pintu
