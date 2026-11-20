#include <stdio.h>

void nama(char nama[]){
    printf("Halo %s \n", nama);
}

void nim(int nim){
    printf("Nim kamu %d", nim);
}
void inputNama(){
    char nama[50];

    printf("Masukkan nama: ");
    scanf("%s", nama);
}

int main(){

   inputNama();

   printf("Nama kamu %s", nama);

}