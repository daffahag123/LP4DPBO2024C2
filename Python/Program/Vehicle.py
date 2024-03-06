# Kelas Vehicle digunakan untuk mempresentasikan data Kendaraan
# Kelas Vehicle merupakan kelas induk dari kelas Car dan kelas Motorcycle
class Vehicle:
    # Atribut yang digunakan pada kelas Vehicle terdiri dari nama kendaraan, plat nomor, merk, tahun produksi, dan warna. 
    # Constructor
    def __init__(self, nama_kendaraan="", plat_nomor="", merk="", tahun_produksi="", warna=""):
        self.nama_kendaraan = nama_kendaraan
        self.plat_nomor = plat_nomor
        self.merk = merk
        self.tahun_produksi = tahun_produksi
        self.warna = warna
        
    # Method setter untuk set nilai setiap atribut pada kelas Vehicle
    def setNamaKendaraan(self, nama_kendaraan):
        self.nama_kendaraan = nama_kendaraan

    def setPlatNomor(self, plat_nomor):
        self.plat_nomor = plat_nomor

    def setMerk(self, merk):
        self.merk = merk

    def setTahunProduksi(self, tahun_produksi):
        self.tahun_produksi = tahun_produksi

    def setWarna(self, warna):
        self.warna = warna

    # Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
    def getNamaKendaraan(self):
        return self.nama_kendaraan

    def getPlatNomor(self):
        return self.plat_nomor

    def getMerk(self):
        return self.merk

    def getTahunProduksi(self):
        return self.tahun_produksi

    def getWarna(self):
        return self.warna
        
    

    