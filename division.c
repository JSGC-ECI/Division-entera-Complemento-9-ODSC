#include <stdio.h>

void main() {
    int plin;
    scanf("%d", &plin);

    for (int i = 0; i < plin; i++) {
        int dividendo, divisor;
        int cociente = 0, residuo;

        scanf("%d %d", &dividendo, &divisor);

        if (divisor == 0) {
            printf("Error: División por cero\n");
            continue;
        }

        while (dividendo >= divisor) {
            dividendo -= divisor;
            cociente++;
        }

        residuo = dividendo;

        printf("%d\n", cociente);
        printf("%d\n", residuo);
    }
}
