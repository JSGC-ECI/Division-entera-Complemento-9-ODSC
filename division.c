#include <stdio.h>

void main() {
    int plin;
    scanf("%d", &plin);

    for (int i = 0; i < plin; i++) {
        int dividendo;
        int divisor;
        int cociente = 0;
        int residuo;
        scanf("%d", &dividendo);
        scanf("%d", &divisor);;

        while (dividendo >= divisor) {
            dividendo -= divisor;
            cociente++;
        }

        residuo = dividendo;

        printf("%d\n", cociente);
        printf("%d\n", residuo);
    }
}
