#include <stdio.h>

int main (){
    int hari;

    printf("Cek Hari : ");
    scanf("%d" ,&hari);

    switch(hari){

    case 1:
     printf("Hari Senin");
      break;
    case 2:
     printf("Hari Selasa");
      break;
    case 3:
     printf("Hari Rabu");
      break;
    case 4:
     printf("Hari Kamis");
      break;
    case 5:
     printf("Hari Jumat");
      break;
    case 6:
     printf("Hari Sabtu");
      break;
    case 7: 
     printf("Hari Minggu");
      break;
    default:
     printf("biongo");
    }

    return 0;
}

// Materi 1
//  * Definisi Pemrograman:
//    Pemrograman adalah proses merancang, menulis, menguji, dan memelihara kumpulan instruksi (kode program) agar komputer dapat menjalankan fungsi atau menyelesaikan masalah tertentu secara otomatis.
//  * Arti Ikon Flowchart:
//    Simbol berbentuk lingkaran kecil pada flowchart melambangkan Connector (Penghubung), yang digunakan untuk menyambungkan alur proses yang terputus dalam halaman yang sama.
//  * Definisi Variabel:
//    Variabel adalah tempat atau wadah di dalam memori komputer bernama yang digunakan untuk menyimpan nilai data yang nilainya dapat berubah selama program dijalankan.
//  * Contoh Deklarasi Variabel:
//    int umur;          // Deklarasi variabel integer
// float tinggi = 170.5; // Deklarasi sekaligus inisialisasi

//  * Definisi Sequence:
//    Sequence (urutan) adalah struktur kontrol dasar di mana setiap instruksi dijalankan secara berurutan, baris demi baris, dari atas ke bawah.
//  * Jenis Tipe Data dalam Bahasa C:
//    * int: Menyimpan bilangan bulat (contoh: 10, -5).
//    * float: Menyimpan bilangan pecahan/desimal presisi tunggal (contoh: 3.14).
//    * double: Menyimpan bilangan pecahan/desimal presisi ganda (contoh: 3.14159265).
//    * char: Menyimpan satu karakter tunggal (contoh: 'A').
//    * void: Menandakan tipe kosong / tidak mengembalikan nilai.
// Materi 2
//  * Anatomi Dasar Program C:
//    #include <stdio.h> // Header file / Preprocessor directive

// int main() {       // Fungsi utama program
//     // Statement / Kode program
//     printf("Hello, World!");

//     return 0;      // Mengembalikan nilai 0 (program selesai dengan sukses)
// }

//  * Contoh Nama Variabel Valid & Tidak Valid:
//    * Valid: nilai_mahasiswa, umur2, _total (menggunakan kombinasi huruf, angka, underscore, dan tidak diawali angka).
//    * Tidak Valid: 1nilai (diawali angka), nilai total (mengandung spasi), int (kata kunci bawaan C).
//  * Cara Mencetak Output:
//    Menggunakan fungsi printf() dari pustaka stdio.h diikuti teks atau penentu format (format specifier). Contoh: printf("Nilai: %d", nilai);
//  * Definisi scanf:
//    scanf adalah fungsi standar dalam bahasa C yang digunakan untuk menerima input data dari pengguna melalui keyboard.
//  * Arti x++ dan x--:
//    * x++ (Increment): Menambahkan nilai variabel x sebanyak 1.
//    * x-- (Decrement): Mengurangi nilai variabel x sebanyak 1.
// Materi 3
//  * Jenis-jenis Operator:
//    * Operator Aritmatika
//    * Operator Perbandingan / Relasional
//    * Operator Penugasan (Assignment)
//    * Operator Logika
//  * Isi Operator Aritmatika:
//    * Penjumlahan (+)
//    * Pengurangan (-)
//    * Perkalian (*)
//    * Pembagian (/)
//    * Sisa Bagi / Modulus (%)
//  * Isi Operator Perbandingan:
//    * Sama dengan (==)
//    * Tidak sama dengan (!=)
//    * Lebih besar dari (>)
//    * Lebih kecil dari (<)
//    * Lebih besar atau sama dengan (>=)
//    * Lebih kecil atau sama dengan (<=)
//  * Isi Operator Penugasan:
//    * Penugasan dasar (=)
//    * Tambah dan tugaskan (+=)
//    * Kurang dan tugaskan (-=)
//    * Kali dan tugaskan (*=)
//    * Bagi dan tugaskan (/=)
//    * Modulus dan tugaskan (%=)
//  * Isi Operator Logika:
//    * Logika AND (&&)
//    * Logika OR (||)
//    * Logika NOT (!)
// Materi 4
//  * Definisi Percabangan if-else:
//    Struktur kontrol percabangan yang digunakan untuk menentukan eksekusi baris kode berdasarkan evaluasi syarat/kondisi (bernilai true atau false).
//  * Contoh Analogi if-else:
//    Jika hari hujan (if), saya akan membawa payung. Jika tidak (else), saya membawa topi.
//  * Kapan Menggunakan if-else:
//    Saat program memiliki dua opsi keputusan berdasarkan satu kondisi tunggal.
//  * Kapan Menggunakan if-else if:
//    Saat program memiliki lebih dari dua opsi keputusan yang memerlukan pengujian kondisi secara berjenjang/bertahap.
// Materi 5 – Switch Case
//  * Definisi & Penggunaan switch-case:
//    Struktur percabangan multi-arah yang mencocokkan nilai variabel dengan beberapa nilai konstan (case). Digunakan ketika ada banyak pilihan menu atau nilai diskrit.
//  * Perbedaan switch-case dengan if-else:
//    * switch-case: Hanya memeriksa kondisi kesamaan nilai diskrit (int atau char), penulisan kode lebih rapi untuk menu.
//    * if-else: Lebih fleksibel karena dapat menangani kondisi rentang nilai (misal: > 80) serta menguji ekspresi logika kompleks.
//  * Definisi switch, case, dan default:
//    * switch: Memulai pemeriksaan variabel target.
//    * case: Menandai opsi nilai konstan yang akan dicocokkan.
//    * default: Blok kode cadangan yang dijalankan jika tidak ada case yang sesuai.
// Materi 5 – Perulangan (Looping)
//  * Kapan Perlu Menggunakan Perulangan:
//    Saat program perlu mengeksekusi sekumpulan perintah secara berulang-ulang tanpa harus menuliskan baris kodenya berkali-kali.
//  * Bagian Utama Perulangan:
//    * Inisialisasi: Penentuan nilai awal variabel pencacah.
//    * Kondisi: Syarat agar perulangan tetap berjalan.
//    * Update (Increment/Decrement): Pengubah nilai pencacah pada setiap putaran.
//    * Body of Loop: Blok kode yang diulang.
//  * Perbedaan for, while, dan do-while:
//    * for: Digunakan saat jumlah perulangan sudah diketahui pasti. (Analogi: Berlari mengelilingi lapangan sebanyak 5 kali).
//    * while: Mengecek kondisi di awal; jika kondisi bernilai false dari awal, perintah tidak pernah dijalankan. (Analogi: Memeriksa tiket bioskop sebelum diizinkan masuk).
//    * do-while: Menjalankan perintah minimal satu kali terlebih dahulu sebelum mengecek kondisi di akhir. (Analogi: Mencicipi satu sendok makanan baru sebelum memutuskan mau lanjut makan atau berhenti).
// Soal Koding
// 1. Cetak Output Nama
// #include <stdio.h>

// int main() {
//     printf("Halo, nama saya Budi\n");
//     return 0;
// }

// 2. Meminta dan Menampilkan Nama
// #include <stdio.h>

// int main() {
//     char nama[50];
//     printf("Masukkan nama Anda: ");
//     scanf("%49[^\n]", nama);
//     printf("Nama Anda: %s\n", nama);
//     return 0;
// }

// 3. Input Nama, Umur, dan NIM
// #include <stdio.h>

// int main() {
//     char nama[50], nim[20];
//     int umur;

//     printf("Masukkan Nama: ");
//     scanf("%49[^\n]", nama);
//     printf("Masukkan Umur: ");
//     scanf("%d", &umur);
//     printf("Masukkan NIM: ");
//     scanf("%s", nim);

//     printf("\n--- Data Terdaftar ---\n");
//     printf("Nama : %s\n", nama);
//     printf("Umur : %d tahun\n", umur);
//     printf("NIM  : %s\n", nim);

//     return 0;
// }

// 4. Operasi Aritmatika Dua Bilangan Bulat
// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("Masukkan bilangan pertama: ");
//     scanf("%d", &a);
//     printf("Masukkan bilangan kedua: ");
//     scanf("%d", &b);

//     printf("Penjumlahan : %d\n", a + b);
//     printf("Pengurangan : %d\n", a - b);
//     printf("Perkalian   : %d\n", a * b);
//     if (b != 0) {
//         printf("Pembagian   : %.2f\n", (float)a / b);
//     } else {
//         printf("Pembagian   : Tidak bisa dibagi dengan nol\n");
//     }

//     return 0;
// }

// 5. Operator Penugasan +=
// #include <stdio.h>

// int main() {
//     int angka = 10;
//     angka += 5;
//     printf("Hasil nilai angka: %d\n", angka);
//     return 0;
// }

// 6. Menentukan Nilai Huruf Mahasiswa
// #include <stdio.h>

// int main() {
//     int nilai;
//     printf("Masukkan nilai (0-100): ");
//     scanf("%d", &nilai);

//     if (nilai >= 85 && nilai <= 100) {
//         printf("Nilai: A\n");
//     } else if (nilai >= 75 && nilai <= 84) {
//         printf("Nilai: B\n");
//     } else if (nilai >= 60 && nilai <= 74) {
//         printf("Nilai: C\n");
//     } else if (nilai >= 0 && nilai < 60) {
//         printf("Nilai: D\n");
//     } else {
//         printf("Nilai tidak valid!\n");
//     }

//     return 0;
// }

// 7. Menu Minuman (switch-case)
// #include <stdio.h>

// int main() {
//     int pilihan;
//     printf("1 = Air putih\n");
//     printf("2 = Teh\n");
//     printf("3 = Kopi\n");
//     printf("4 = Susu\n");
//     printf("Pilih nomor minuman: ");
//     scanf("%d", &pilihan);

//     switch (pilihan) {
//         case 1:
//             printf("Pilihan Anda: Air putih\n");
//             break;
//         case 2:
//             printf("Pilihan Anda: Teh\n");
//             break;
//         case 3:
//             printf("Pilihan Anda: Kopi\n");
//             break;
//         case 4:
//             printf("Pilihan Anda: Susu\n");
//             break;
//         default:
//             printf("Pilihan tidak valid\n");
//             break;
//     }

//     return 0;
// }

// 8. Perulangan for Angka 1-100
// #include <stdio.h>

// int main() {
//     for (int i = 1; i <= 100; i++) {
//         printf("%d ", i);
//     }
//     printf("\n");
//     return 0;
// }

// 9. Perulangan while Angka 1-5
// #include <stdio.h>

// int main() {
//     int i = 1;
//     while (i <= 5) {
//         printf("%d ", i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

// 10. Perulangan Input Hingga Angka 0
// #include <stdio.h>

// int main() {
//     int angka;
//     do {
//         printf("Masukkan sebuah bilangan (masukkan 0 untuk berhenti): ");
//         scanf("%d", &angka);
//     } while (angka != 0);

//     printf("Program selesai.\n");
//     return 0;
// }