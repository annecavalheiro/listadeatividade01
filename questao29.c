//29
//A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça um algoritmo que receba um valor de uma compra e mostre o valor das prestações

#include <stdio.h>

int main() {
    float valor_total, prestacao;

    // Entrada: valor total da compra
    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor_total);

    // Processamento: cálculo do valor das 5 prestações
    prestacao = valor_total / 5;

    // Saída: mostra o valor de cada prestação
    printf("O valor de cada prestacao (sem juros) e: R$ %f\n", prestacao);

    return 0;
}

