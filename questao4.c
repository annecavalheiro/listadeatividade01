//4
//Faça um algoritmo que receba três notas de um aluno, calcule e imprima a média aritmética entre essas notas.

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // ENTRADA
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // PROCEDIMENTO
    media = (nota1 + nota2 + nota3) / 3;

    // SAÍDA
    printf("A media aritmetica e: %.2f\n", media);

    return 0;
}

