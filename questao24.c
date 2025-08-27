//24
//No momento, por conta da administração pública péssima e da corrupção em todos os setores estatais, os comerciantes estão procurando aumentar suas vendas oferecendo desconto.
//Faça um algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.

#include <stdio.h>

int main() {
    float valor_original, valor_com_desconto;
    float desconto = 9.0;  // desconto de 9%

    // Entrada do valor do produto
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor_original);

    // Calcula o valor com desconto
    valor_com_desconto = valor_original - (valor_original * desconto / 100);

    // Exibe o novo valor com desconto
    printf("Valor com 9%% de desconto: R$ %f\n", valor_com_desconto);

    return 0;
}

