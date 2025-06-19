bool mayor(int a, int b)
{
    return a > b;
}

void convertirACifras(char numeroStr[], int cifras[], int *longitud) {
    *longitud = strlen(numeroStr); // longitud del número
    for (int i = 0; i < *longitud; i++) {
        cifras[i] = numeroStr[i] - '0'; // convertir carácter a dígito
    }
}
