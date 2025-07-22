#include <stdio.h>

// Convierte un número en una lista de sus dígitos (de derecha a izquierda)
// Retorna la cantidad de dígitos
int numAList(int num, int lista[]) {
    int tam = 0;
    while (num > 0) {
        lista[tam] = num % 10;
        num /= 10;
        tam++;
    }
    return tam;
}

// Calcula el complemento a 9 del sustraendo ajustado al tamaño del minuendo
void complemento9(int s[], int tsus, int tmin, int c9[]) {
    for (int i = 0; i < tmin; i++) {
        if (i < tsus)
            c9[i] = 9 - s[i];
        else
            c9[i] = 9;
    }
}

// Resta dos enteros utilizando complemento a 9
int restar(int minuendo, int sustraendo) {
    int m[350000], s[350000], c9[350000], suma[350001];

    // Convertir a listas de dígitos
    int tmin = numAList(minuendo, m);
    int tsus = numAList(sustraendo, s);

    // Calcular el complemento a 9 del sustraendo
    complemento9(s, tsus, tmin, c9);

    // Sumar minuendo + complemento + 1 (acarreo)
    int acarreo = 1;
    for (int i = 0; i < tmin; i++) {
        suma[i] = m[i] + c9[i] + acarreo;
        acarreo = suma[i] / 10;
        suma[i] %= 10;
    }

    // Reconstruir el número resultado desde los dígitos
    int resultado = 0;
    for (int i = tmin - 1; i >= 0; i--) {
        resultado = resultado * 10 + suma[i];
    }

    return resultado;
}

int main() {
    int plin;
    scanf("%d", &plin);  // Leer cantidad de casos

    for (int i = 0; i < plin; i++) {
        int dividendo, divisor;
        int cociente = 0, residuo;

        // Leer dividendo y divisor
        scanf("%d", &dividendo);
        scanf("%d", &divisor);

        // División por restas sucesivas
        while (dividendo >= divisor) {
            dividendo = restar(dividendo, divisor);
            cociente++;
        }

        residuo = dividendo;

        // Imprimir resultados
        printf("%d\n", cociente);
        printf("%d\n", residuo);
    }

    return 0;
}
