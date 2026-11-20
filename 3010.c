#include <stdio.h>

int perkalian(){

    int a = 10;
    int b = 5;

    return a * b;
    
}
int penjumlahan(){

    int a = 10;
    int b = 5;
    
    return a + b;
}


void sapa (){
    printf("Halo\n");
    printf("Apa Kabar?\n");
}
int main(){

    sapa();
    int hasil_perkalian = perkalian();
    int hasil_penjumlahan = penjumlahan();
    printf("Hasil Perkalian = %d \n", hasil_perkalian);
    printf("Hasil Penjumlahan = %d \n", hasil_penjumlahan);
    

    return 0;
}