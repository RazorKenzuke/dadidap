#include <stdio.h>

int main() {
    float a, b, total, c;

    printf("Masukkan sisi a dan b: ");
    scanf("%f %f", &a, &b);

    total = (a * a) + (b * b);

    c = total;
    for (int i = 0; i < 10; i++) {
        c = (c + total / c) / 2;
    }

    printf("Sisi miring (c) = %.2f\n", c);
    return 0;
}