#include <stdio.h>

int main(){

 int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 60 && nilai <= 100){
        printf("Lulus \n");
    } else if (nilai >= 0 && nilai < 60) {
        printf("Tidak Lulus\n");
    } 
    
    
    else {
        printf("Masukkan Nilai dengan Benar!\n");
    }




   return 0; 
}