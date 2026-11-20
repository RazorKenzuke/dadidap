#include <stdio.h>

int main(){

    char nama[50];
    int nim;

    printf("Masukkan Nama Anda: ");
    scanf("%49[^\n]", &nama);

    printf("Masukkan NIM Anda: ");
    scanf("%d" , &nim);

    printf("=Data Diri=\n");

    printf("Nama Anda: %s\n", nama);
    printf("NIM : %d\n", nim);









    return 0;
}