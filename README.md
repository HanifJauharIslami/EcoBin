<img src="Dokumentasi/Logo_EcoBin.png">

# EcoBin
Inovasi Tempat Sampah Pintar Berbasis IoT untuk Pemilahan Sampah Otomatis dan Ramah Lingkungan.

EcoBin adalah sebuah konsep pengembangan tempat sampah yang dilengkapi teknologi Internet of Things (IoT). Sistem ini secara otomatis memisahkan jenis-jenis sampah (seperti organik, anorganik, dan logam) menggunakan sensor-sensor yang terhubung ke jaringan, sehingga lebih efisien dan mendukung keberlanjutan lingkungan dengan pemilahan sampah yang lebih tepat. Selain itu, tempat sampah ini juga dapat dimonitoring dari jarak jauh untuk memantau kapasitas dan kondisi sampah secara real-time.

## Didukung Oleh :
>- Dosen Pengampu : Akhmad Hendriawan ST., MT. (NIP.197501272002121003)
>- Mata kuliah : IoT dan Jaringan Sensor
>- Program Studi : D4 Teknik Elektronika
>- Politeknik Elektronika Negeri Surabaya<br>

## Team Member :
|      NRP      |       Nama      |    Jobdesk    |   Akun |
| :-----------:|:----------------:| :------------:| :-----:|
| 2122600032    | Regar Mukti Wijaya  | Hardware Developer       | [Reigar304](https://github.com/Regar304)
| 2122600034    | Yunanta Adi Wijaya        |  Data Analyst | [WAYs-s](https://github.com/WAYs-s)
| 2122600039    | Veda Alfa Elydal        |    Software Developer      | [Vedaalfaelydal](https://github.com/Vedaalfaelydal)
| 2122600048    | Hanif Jauhar Islami              | Project Manager | [HanifJauharIslami](https://github.com/HanifJauharIslami)
| 2122600053    | Dwi Angga Ramadhani               | UI/UX Designer     | [dwiangga12](https://github.com/dwiangga12)
| 2122600059    | Dewa Gede Angkasa Arinanta              | 3D Designer     |[dede-akgs](https://github.com/dede-akgs)

## Daftar Isi
- [Komponen Yang Digunakan](#Komponen-Yang-Digunakan)
- [Hardware](#Hardware)
- [Desain 3D](#Desain-3D)
- [Program ESP32](#Program-ESP32)
- [Program Design UI/UX](#Pogram-Design-UI/UX)

 
## Komponen Yang Digunakan
1. **Hardware**<br>
    a. ESP32<br>
    b. Sensor Ultrasonik<br>
    c. Sensor Proximity Induktif<br>
    d. Sensor Proximity Kapasitif<br>
    e. Sensor Proximity Infrared<br>
    f. Motor Servo<br>
    g. LCD 20X4 I2C<br>
    h. Modul Df Player <br>
    i. Speaker <br>
    j. Power Supply <br>

2. **Software**<br>
    a. Arduino ide<br>
    b. KiCad<br>
    c. Inventor<br>
    d. Visual Studio Code (VSC)<br>
    e. Eagle<br>

3. **Alat**<br>
    a. Solder<br>
    b. Timah solder<br>
    c. Kabel jumper<br>
    d. Breadboard<br>
    e. Obeng<br>
 
## [Hardware](https://github.com/NurRohmatHidayat/Smart-Building-Solution/tree/main/Hardware)

Berikut ini adalah hasil skematik rangkaian EcoBin menggunakan software KiCad.
<img src="Dokumentasi/Smart Building SCH.png">

Berikut ini adalah hasil 3D dari  rangkaian EcoBin menggunakan software KiCad.

<img src="Dokumentasi/Smart Building.jpg">

## Desain 3D

1. Desain 3D Tampak Depan <br>
<img src="Desain 3D EcoBin/Desain 3D - Tampak Depan.png">

2. Desain 3D Tampak Samping <br>
<img src="Desain 3D EcoBin/Desain 3D Terbuka - Tampak Sudut.png">

3. Desain 3D Tampak Belakang <br>
<img src="Desain 3D EcoBin/Desain 3D - Tampak Belakang.png">

Berikut adalah Link Thingivers Design 3D. Klik link Video Simulasi Software [Thingivers](https://www.thingiverse.com/thing:6796394)


## Program ESP32

Program utama dari projek ini :
- [EcoBin Code](https://github.com/HanifJauharIslami/EcoBin/blob/f4bee43d3d4f70b857a67019edb6326d1a9f5407/Source%20Code%20ESP/Source%20Code%20ESP32.ino)

Berikut ini adalah hasil Rangkaian Simulasi EcoBin menggunakan platform Wokwi.

<img src="Dokumentasi/Dokumentasi/Gambar Rangakain di Wokwi.png">
Simulasi ini kami menggunakan ESP32 untuk mengontrol sensor dan modul yang terhubung di breadboard. Simulasi dilakukan menggunakan Wokwi, yang memudahkan pengujian rangkaian secara virtual sebelum implementasi fisik. Rangkaian melibatkan sensor DHT22, modul relay, LED indikator, potensiometer, dan RTC untuk sinkronisasi waktu.

Relay digunakan untuk mengontrol perangkat eksternal, sementara LED menunjukkan status sistem. Simulasi ini membantu dalam debugging dan memastikan komunikasi antar komponen berjalan baik. Meskipun Wokwi tidak menyediakan semua komponen, platform ini sangat berguna untuk pengujian dan visualisasi fungsi dasar rangkaian, membantu mengidentifikasi masalah sebelum produksi fisik.


Berikut adalah video demontrasi alat menggunakan wokwi. Klik link [Video Simulasi Software](https://youtu.be/oXDYyiHHBaU "Video Simulasi Software")

## [Program Design UI/UX]

Berikut ini adalah program untuk WEB Smart Building System IoT menggunakan bahasa HTML [Program](https://github.com/NurRohmatHidayat/Smart-Building-Solution/tree/main/UI/UX%20Designer)
