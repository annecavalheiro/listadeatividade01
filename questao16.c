//16
//Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e imprima:
//• a idade dessa pessoa;
//• essa idade convertida em semanas.

#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual, idade;
    int idade_semanas;

    // ENTRADA
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    // PROCEDIMENTO
    idade = ano_atual - ano_nascimento;
    idade_semanas = idade * 52;  // Aproximando 1 ano = 52 semanas

    // SAÍDA
    printf("Idade: %d anos\n", idade);
    printf("Idade em semanas: %d semanas\n", idade_semanas);

    return 0;
}

