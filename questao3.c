//3
//Faça um algoritmo que receba dois números inteiros, calcule e imprima a divisão do primeiro número 

#include <stdio.h>

int main() {
    int num1, num2;
    float resultado;

    // ENTRADA
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    // PROCEDIMENTO
    resultado = (float)num1 / num2;

    // SAÍDA
    printf("O resultado da divisao e: %f\n", resultado);

    return 0;
}
