# LP4DPBO2024C2

Saya Daffa Fakhry Anshori dengan NIM 2200337 mengerjakan soal Latihan 4 dalam Praktikum mata kuliah Desain dan Pemrograman Berbasis Objek, 
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamin.

# Desain Kelas
![Class Diagram LP4](https://github.com/daffahag123/LP4DPBO2024C2/assets/135239333/a722674b-a23b-41d8-8931-edf991ff35ec)

# Desain Program
Dalam proses pembuatan program berbasis OOP, saya menggunakan 2 bahasa pemrograman yaitu C++ dan Python. Di dalam tugas ini, saya telah merancang dan mengimplementasikan 6 kelas yang memiliki peran dan fungsionalitas spesifik. Berikut adalah rincian masing-masing kelas:
1. Kelas Vehicle
   - Merupakan Kelas Induk dari Kelas Car & Kelas Motorcycle
   - Memiliki Atribut: Nama Kendaraan, Plat Nomor, Merk, Tahun Produksi, Warna
   - Memiliki Method: Konstruktor, Setter & Getter
3. Kelas Car
   - Merupakan Kelas Turunan dari Kelas Vehicle
   - Memiliki Atribut: Jumlah Kursi & Jumlah Pintu
   - Memiliki Method: Konstruktor, Setter & Getter
4. Kelas Motorcycle
   - Merupakan Kelas Anak dari Kelas Vehicle
   - Memiliki Atribut: Jenis Motor & Kapasitas Tangki
   - Memiliki Method: Konstruktor, Setter & Getter
5. Kelas Garage
   - Merupakan Kelas Mandiri yang berarti tidak bergantung pada kelas lain
   - Memiliki Hubungan Komposisi dengan Kelas Car & Kelas Motorcycle, karena objek dari kelas Garage memiliki atribut yang merupakan objek dari Kelas Car & Kelas Motorcycle.
   - Memiliki Atribut: Nama Garasi, Luas Garasi, daftarMobil (menyimpan objek dari kelas Car), daftarMotor (menyimpan objek dari kelas Motorcycle)
   - Memiliki Method: Konstruktor, Setter & Getter
6. Kelas Parking Lot
   - Merupakan Kelas Mandiri yang berarti tidak bergantung pada kelas lain
   - Memiliki Hubungan Komposisi dengan Kelas Car & Kelas Motorcycle, karena objek dari kelas Parking Lot memiliki atribut yang merupakan objek dari Kelas Car & Kelas Motorcycle.
   - Memiliki Atribut: Kapasitas, Jumlah Kendaraan Saat Ini, daftarMobil (menyimpan objek dari kelas Car), daftarMotor (menyimpan objek dari kelas Motorcycle)
   - Memiliki Method: Konstruktor, Setter & Getter
7. Kelas Tabel
   - Untuk menampilkan semua informasi terkait baju, agar tampilan data semakin rapih
   - Memiliki Atribut: Baris dan Kolom
   - Memiliki Method: Konstruktor, Setter & Getter, Membuat Tabel & Menampilkan Data
    
Selanjutnya, saya membuat objek motor dan mobil di dalam blok kode utama, lalu menambahkannya ke dalam list daftarMobil dan daftarMotor. 
Setelah itu, saya membuat objek parkir dan garasi dengan memasukkan parameter di dalamnya, termasuk list daftarMobil dan daftarMotor. Ini karena setiap garasi akan menampung sejumlah mobil dan motor.
Kemudian, keluaran dari objek garasi dan objek parkir akan ditampilkan

# Alur Program
1. User akan diberikan pilihan yang tersedia untuk menampilkan daftar kendaraan.
2. Setelah itu, program akan menampilkan opsi-opsi yang tersedia, antara lain:
   - Menampilkan daftar kendaraan mobil dan motor yang ada di dalam garasi toko.
   - Menampilkan daftar kendaraan mobil dan motor yang ada di dalam garasi rumah.
   - Menampilkan daftar kendaraan yang terparkir di area parkir mobil apartemen.
   - Menampilkan daftar kendaraan yang terparkir di area parkir motor apartemen.
   - Opsi untuk keluar dari program.
3. User akan diminta untuk memilih nomor yang sesuai dengan opsi yang diinginkan.
4. Setelah User memilih opsi yang diinginkan, program akan menampilkan data kendaraan.
