#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("catatan.txt", "w");
    fprintf(fp, "Halo, bodok ngoni ajg\n");
    fclose(fp);

    printf("jadi.");
    return 0;
}