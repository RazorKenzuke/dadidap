#include <stdio.h>

int main()

{
    FILE *fp;
 
    fp = fopen("Mahasiswa.txt", "w");

    if (fp == NULL){
        printf("nda jadi.");
        return 1;
    }

    fprintf(fp, "NAMA : Aso\n");
    fprintf(fp, "NIM : 6767\n");
    fprintf(fp, "Nilai : Tak Terhingga\n");

    fclose(fp);

    printf("tasimpang");

    return 0;
}