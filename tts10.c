#include <stdio.h>

int main() {
    int nilai;
    printf("Masukkan nilai: "
    scanf("%d", &nilai);

    if (nilai >= 90 && nilai <= 100) {
        printf("Nilai: A\n");
    } else if (nilai >= 80 && nilai <= 89) {
        printf("Nilai: B\n");
    } else if (nilai >= 72 && nilai <= 79) {
        printf("Nilai: C\n");
    } else if (nilai >= 60 && nilai <= 71) {
        printf("Nilai: D\n");
    } else if (nilai >= 0 && nilai < 60) {
        printf("Nilai: E\n");
    } else {
        printf("Masukkan Nilai dengan Benar!!!\n");
    }

    return 0;
}