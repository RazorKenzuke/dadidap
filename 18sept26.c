#include <stdio.h>

int main(){
    // int x = 5;
    // int y = 5;

    // printf("Hasil dari perbandingan x == y : %d\n", x == y);

    // printf("Hasil dari perbandingan x != y adalah : %d\n", x != y);

    // printf("Hasil dari perbandingan x > y adalah : %d\n", x > y);

    // printf("Hasil dari perbandingan x < y adalah : %d\n", x < y);
    
    // printf("Hasil dari perbandingan x >= y adalah : %d\n", x >= y );

    // printf("Hasil dari perbandingan x <= y adalah : %d\n", x <= y);
    // int nilaiTugas1 = 85;
    // int nilaiTugas2 = 75; 

    // int statusLulus = (nilaiTugas1 > 70 && nilaiTugas2 > 80);
    // printf("Gw lulus atau gak ( 1 = lulus, 0 = gagal) : %d\n" ,statusLulus);

    // int remidi = (nilaiTugas1 < 70 || nilaiTugas2 < 80);
    // printf("Cek aja remidi engga ( 1 = yap, 0 = tidak) : %d\n" ,remidi);

    
    int nim;
    char kodekelas;
    int kodesoal;
    float jarijari, luas, keliling;
    float phi = 3.14;

    printf("Masukkan NIM Anda = ");
    scanf("%d" , &nim);

    printf("Masukkan kode kelas DDP Anda = ");
    scanf(" %c" , &kodekelas);
    
    kodesoal = 2 - (nim % 2);

    printf("==Data Diri==\n");  
    
    printf("NIM : %d\n", nim);
    printf("Kode kelas DDP : %c\n", kodekelas);
    printf("Kode soal anda : %d\n", kodesoal);

    // printf("==Bangun Datar==\n");

    // printf("Masukkan jari jari = ");
    // scanf("%f" , &jarijari);

    // luas = phi * jarijari * jarijari;
    // keliling = 2 * phi * jarijari;

    // printf("==Hasil==\n");
    // printf("Jari jari : %.2f\n", jarijari);
    // printf("Luas : %.2f\n", luas);
    // printf("Keliling : %2.f\n", keliling);



    
    return 0;

}