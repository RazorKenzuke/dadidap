#include <stdio.h>

int main() {
    int angka;
    do {
        printf("Masukkan sebuah bilangan rahasia: ");
        scanf("%d", &angka);
    } while (angka != 7);

    printf("Program selesai.\n");
    return 0;
}