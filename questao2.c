//2
//Faça um algoritmo que receba dois números reais, calcule e imprima a subtração do primeiro número pelo segundo.

#include <stdio.h>

int main() {
    float num1, num2, subtracao;

    // ENTRADA
    printf("Digite o primeiro numero real: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero real: ");
    scanf("%f", &num2);

    // PROCEDIMENTO
    subtracao = num1 - num2;

    // SAÍDA
    printf("O resultado da subtracao e: %f\n", subtracao);

    return 0;
}

