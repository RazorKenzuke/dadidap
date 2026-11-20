#include <stdio.h>

int main() {
    int matriks[3][3];
    int i, j, jumlah;
    float rata;

 
    printf("Masukkan elemen matriks 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Baris %d, Kolom %d: ", i + 1, j + 1);
            scanf("%d", &matriks[i][j]);
        }
    }

    
    printf("\nOutput:\n");
    for (i = 0; i < 3; i++) {
        jumlah = 0;
        printf("baris %d : ", i + 1);

        for (j = 0; j < 3; j++) {
            printf("%3d ", matriks[i][j]);
            jumlah += matriks[i][j];
        }

        rata = (float)jumlah / 3; 
        printf("\t%4d\t%6.1f\n", jumlah, rata);
    }

    return 0;
}