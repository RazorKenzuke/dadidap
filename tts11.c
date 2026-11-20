
#include <stdio.h>

int main() {
    int pilihan;
    printf("1 = Air putih\n");
    printf("2 = Teh\n");
    printf("3 = Kopi\n");
    printf("4 = Susu\n");
    printf("Pilih nomor minuman: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Pilihan Anda: Air putih\n");
            break;
        case 2:
            printf("Pilihan Anda: Teh\n");
            break;
        case 3:
            printf("Pilihan Anda: Kopi\n");
            break;
        case 4:
            printf("Pilihan Anda: Susu\n");
            break;
        default:
            printf("Pilihan tidak valid\n");
            break;
    }

    return 0;
}