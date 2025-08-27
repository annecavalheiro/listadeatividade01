//20
//Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles e o resto da divisão do somatório por cada um dos valores.

#include <stdio.h>

int main() {
    int valor1, valor2, valor3;
    int somatorio;
    float media;
    int resto1, resto2, resto3;

    // Entrada dos três valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    // Calcula o somatório
    somatorio = valor1 + valor2 + valor3;

    // Calcula a média
    media = somatorio / 3;

    // Calcula os restos da divisão do somatório por cada valor
    // Atenção: se algum valor for zero, o programa pode dar erro
    resto1 = somatorio % valor1;
    resto2 = somatorio % valor2;
    resto3 = somatorio % valor3;

    // Exibe os resultados
    printf("\nSomatório dos valores: %d\n", somatorio);
    printf("Média dos valores: %f\n", media);

    printf("\nResto da divisão do somatório por cada valor:\n");
    printf("Resto da divisão por %d: %d\n", valor1, resto1);
    printf("Resto da divisão por %d: %d\n", valor2, resto2);
    printf("Resto da divisão por %d: %d\n", valor3, resto3);

    return 0;
}

