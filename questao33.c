//33
//Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
//• A idade dessa pessoa;
//•Quantos anos ela terá em 2028.

#include <stdio.h>

int main() {
    int ano_nascimento, ano_atual, idade_atual, idade_2028;

    // ENTRADA: Ler o ano de nascimento
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    // ENTRADA: Ler o ano atual
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    // PROCESSAMENTO: calcular idade atual
    idade_atual = ano_atual - ano_nascimento;

    // PROCESSAMENTO: calcular idade em 2028
    idade_2028 = 2028 - ano_nascimento;

    // SAÍDA: mostrar os resultados
    printf("Idade atual: %d anos\n", idade_atual);
    printf("Idade em 2028: %d anos\n", idade_2028);

    return 0;
}

