//5
//Faça um algoritmo que receba duas notas de um aluno e seus respectivos pesos, calcule e imprima a média ponderada dessas notas.

#include <stdio.h>

int main() {
    float nota1, nota2;
    float peso1, peso2;
    float media;

    // ENTRADA
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);

    // PROCEDIMENTO
    media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);

    // SAÍDA
    printf("A media ponderada e: %.2f\n", media);

    return 0;
}

