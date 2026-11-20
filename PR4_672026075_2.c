#include <stdio.h>

int main() {
    double a, b, c, temp;
    char ulang;

    do {
        printf("=======================\n");
        printf("   Program Segitiga\n");
        printf("=======================\n");
        
        printf("Masukkan panjang 3 sisi segitiga (pisahkan dengan spasi): ");
        
        if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
            printf("Masukkan dengan benar! (angka).\n");
            break;
        }
        if (a <= 0 || b <= 0 || c <= 0) {
            printf("Peringatan: Semua panjang sisi harus lebih besar dari 0.\n");
        } else {
            if (a > c) { 
                temp = a; a = c; c = temp; 
            }
            if (b > c) { 
                temp = b; b = c; c = temp; 
            }
            double kuadrat_alas_tinggi = (a * a) + (b * b);
            double kuadrat_hipotenusa = c * c;
            
            double selisih = kuadrat_alas_tinggi - kuadrat_hipotenusa;
            if (selisih < 0) selisih = -selisih; 

            if (selisih < 0.000001) {
                printf("Hasil: Segitiga ini adalah segitiga siku-siku.\n");
            } else {
                printf("Hasil: Segitiga ini bukan segitiga siku-siku.\n");
            }
        }
        printf("\nKetik '.' lalu Enter untuk keluar ");
        scanf(" %c", &ulang);
        printf("\n");
        
    }while (ulang != '.');
  

    printf("Program selesai.\n");
    return 0;
}