# **Kodular**

<img src="Media/kodular2.jpg" alt="Kodular" width="300" height="150">


**Kodular** adalah platform pemrograman visual yang memungkinkan pengguna menciptakan aplikasi seluler tanpa harus menulis kode tradisional. Platform ini berbasis cloud, memiliki editor visual di mana pengguna dapat merakit komponen aplikasi dan mendefinisikan perilakunya, serta menyediakan fitur-fitur lain yang memudahkan pengembangan aplikasi tanpa keterampilan pemrograman yang rumit.

---

# Mengapa Harus Menggunakan Kodular?

Kodular adalah platform yang ideal untuk membuat aplikasi Android dengan mudah. Berikut adalah alasan utama mengapa Anda harus memilih Kodular:

- **Tidak Memerlukan Pengetahuan Coding**  
  Membuat aplikasi tanpa menulis satu baris kode pun. Kodular memungkinkan Anda membuat logika aplikasi menggunakan blok visual yang mudah dipahami.

- **Antarmuka Visual yang Mudah Digunakan**  
  Kodular menyediakan antarmuka berbasis *drag-and-drop* untuk merancang aplikasi. Anda hanya perlu menarik komponen seperti tombol, label, atau grafik dan menyusunnya sesuai kebutuhan.

- **Mendukung Banyak Fitur Bawaan**  
  Kodular memiliki fitur bawaan yang sangat lengkap untuk pengembangan aplikasi modern:  
  - **Database:** Google Sheets, Firebase, TinyDB.  
  - **API:** Dukungan integrasi REST API untuk mendapatkan dan mengirim data.  
  - **Media:** Pemutar audio, video, dan tampilan gambar.  
  - **IoT:** Komponen MQTT dan Bluetooth untuk komunikasi perangkat IoT.  

- **Gratis untuk Digunakan dengan Opsi Ekspor ke APK**  
  Kodular sepenuhnya gratis untuk digunakan, termasuk fitur ekspor ke file APK. Tidak ada biaya tersembunyi untuk memulai atau mencoba platform ini.

---

# Panduan Membuat Aplikasi di Kodular

Aplikasi ini dibangun menggunakan Kodular, sebuah platform tanpa kode (*no-code*) untuk membuat aplikasi Android. Panduan ini akan membantu Anda membuat aplikasi dari nol hingga selesai.


## 1. Riset dan Persiapan Awal
Langkah pertama sebelum mulai membuat aplikasi adalah memahami apa yang ingin Anda buat.

**Langkah-langkah:**
- Tentukan tujuan aplikasi. Misalnya: monitoring sensor suhu, kelembapan, atau lainnya.
- Siapkan bahan-bahan yang dibutuhkan, seperti data dari sensor, URL API, atau Google Spreadsheet.
- (Opsional) Buat sketsa sederhana desain aplikasi agar lebih terarah.


## 2. Membuat Akun Kodular
Anda membutuhkan akun Kodular untuk memulai.

**Langkah-langkah:**
1. Kunjungi [Kodular Creator](https://creator.kodular.io).
2. Buat akun menggunakan email Anda atau login jika sudah punya akun. <br/> <img src="Media/login%20kodular.png" alt="login kodular" width="250" height="400">
3. Masuk ke dashboard Kodular.


## 3. Buat Proyek Baru
Langkah ini untuk memulai aplikasi dari nol.

**Langkah-langkah:**
1. Klik tombol **"Create Project"** di dashboard Kodular. <br/> <img src="Media/dashboard%20kodular2.png" alt="dashboard kodular" width="600" height="300">
2. Beri nama proyek Anda (contoh: MonitoringApp).
3. Pilih template kosong agar lebih fleksibel dalam desain.


## 4. Desain Antarmuka (User Interface)
Gunakan panel **Designer** untuk mendesain tampilan aplikasi.

**Langkah-langkah:**
- Tambahkan komponen:
  - **Label:** Untuk teks atau informasi statis.
  - **Button:** Untuk aksi pengguna (contoh: tombol Refresh).
  - **ListView atau Charts:** Untuk menampilkan data dinamis seperti grafik.
- Sesuaikan tata letak dengan properti seperti warna, ukuran, dan gaya.

**Tips:** Gunakan desain yang sederhana dan mudah dipahami pengguna.


## 5. Tambahkan Fungsionalitas (Logic)
Tambahkan logika aplikasi di tab **Blocks** untuk membuat aplikasi lebih dinamis.
<br/> <img src="Media/blocks%20kodular.png" alt="blocks kodular" width="600" height="300">
<br/> 
<br/> **Langkah-langkah:**
1. **Integrasi Google Spreadsheet:**
   - Gunakan komponen **Google Sheets**.
   - Tambahkan API key atau URL Spreadsheet Anda.
2. **Integrasi MQTT:**
   - Gunakan komponen **Web** untuk koneksi ke broker MQTT.
   - Atur URL broker, topik (*topic*), dan payload data.
3. Tambahkan logika seperti *if-else* atau loop untuk memproses data sensor.

**Tips:** Gunakan blok secara bertahap agar lebih mudah dipahami.


## 6. Uji Coba Aplikasi
Uji aplikasi di perangkat Android sebelum membangun file APK.

**Langkah-langkah:**
1. Unduh **Kodular Companion** dari Google Play Store.
2. Sambungkan perangkat Anda dengan Kodular melalui QR Code.
3. Uji semua fungsi aplikasi secara real-time.

**Tips:** Periksa setiap fitur untuk memastikan tidak ada bug.


## 7. Perbaikan dan Penyesuaian
Jika menemukan kesalahan saat pengujian, lakukan perbaikan.

**Langkah-langkah:**
- Periksa logika pada tab **Blocks**.
- Sesuaikan properti komponen di tab **Designer**.
- Uji kembali aplikasi hingga berfungsi sempurna.

**Tips:** Mintalah masukan dari teman atau pengguna lain untuk perbaikan.


## 8. Ekspor Aplikasi
Setelah aplikasi selesai, ekspor ke format APK agar bisa diinstal di perangkat Android.

**Langkah-langkah:**
1. Klik **Export > Build APK** di menu Kodular.
2. Tunggu hingga proses selesai dan unduh file APK.
3. Instal APK di perangkat Android untuk pengujian lebih lanjut.


## 9. Publikasi (Opsional)
Jika ingin membagikan aplikasi, Anda bisa mengunggahnya ke Google Play Store.

**Langkah-langkah:**
1. Daftar akun Google Play Console (membutuhkan biaya registrasi).
2. Ikuti panduan pengunggahan aplikasi dan unggah APK Anda.
3. Buat deskripsi aplikasi, tangkapan layar, dan metadata lainnya.


## TIPS
- Gunakan **komponen bawaan** Kodular terlebih dahulu sebelum mencoba ekstensi pihak ketiga.
- Dokumentasikan proyek Anda agar lebih mudah dipahami di masa depan.
- Bergabung dengan komunitas Kodular untuk bertanya dan belajar dari pengguna lain.


# **Selamat mencoba dan semoga berhasil! 🎉**

---
