#include <stdio.h>

int numAList(int num, int lista[]) {
    int tam = 0;
    while (num > 0) {
        lista[tam] = num % 10;
        num /= 10;
        tam++;
    }
    return tam;
}

void complemento9(int s[], int tsus, int tmin, int c9[]) {
    for (int i = 0; i < tmin; i++) {
        if (i < tsus)
            c9[i] = 9 - s[i];
        else
            c9[i] = 9;
    }
}

int restar(int minuendo, int sustraendo) {
    int m[10], s[10], c9[10], suma[11];
    int tmin = 0, tsus = 0;

    int temp = minuendo;
    while (temp > 0) {
        m[tmin++] = temp % 10;
        temp /= 10;
    }

    temp = sustraendo;
    while (temp > 0) {
        s[tsus++] = temp % 10;
        temp /= 10;
    }

    complemento9(s, tsus, tmin, c9);

    int acarreo = 1;
    for (int i = 0; i < tmin; i++) {
        suma[i] = m[i] + c9[i] + acarreo;
        acarreo = suma[i] / 10;
        suma[i] %= 10;
    }

    int resultado = 0;
    for (int i = tmin - 1; i >= 0; i--) {
        resultado = resultado * 10 + suma[i];
    }

    return resultado;
}

void main() {
    int plin;
    scanf("%d", &plin);

    for (int i = 0; i < plin; i++) {
        int dividendo;
        int divisor;
        int cociente = 0;
        int residuo;

        scanf("%d", &dividendo);
        scanf("%d", &divisor);

        while (dividendo >= divisor) {
            dividendo = restar(dividendo, divisor);
            cociente++;
        }

        residuo = dividendo;

        printf("%d\n", cociente);
        printf("%d\n", residuo);
    }
}
