//1
//Faça um algoritmo que receba dois números inteiros e imprima a soma desses dois números.

#include <stdio.h>

int main() {
    int num1, num2, soma;

    // ENTRADA
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    // PROCEDIMENTO
    soma = num1 + num2;

    // SAÍDA
    printf("A soma dos dois numeros e: %d\n", soma);

    return 0;
}

