#include <stdio.h>

int main(){
    FILE *mahasiswa;
    char teks[100];

    mahasiswa = fopen("Mahasiswa.txt", "r");

    if (mahasiswa == NULL){
        printf("nyanda ada");
        return 1;
    }

    while (fgets(teks, sizeof(teks), mahasiswa) != NULL){
        printf("%s", teks);
}

fclose(mahasiswa);

return 0;
}


