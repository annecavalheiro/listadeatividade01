//28
//Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

int main() {
    float C, F;

    // Entrada: temperatura em Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &C);

    // Processamento: conversão para Fahrenheit
    F = (9 * C + 160) / 5;

    // Saída: temperatura em Fahrenheit
    printf("A temperatura em Fahrenheit e: %f\n", F);

    return 0;
}

