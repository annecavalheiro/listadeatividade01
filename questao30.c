//30
//Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se que o preço de custo receberá um acréscimo de acordo com um percentual informado pelo usuário.

#include <stdio.h>

int main() {
    float preco_custo, percentual_acrescimo, preco_venda;

    // ENTRADA: preço de custo do produto
    printf("Digite o preco de custo do produto: R$ ");
    scanf("%f", &preco_custo);

    // ENTRADA: percentual de acréscimo desejado
    printf("Digite o percentual de acrescimo (ex: 20 para 20%%): ");
    scanf("%f", &percentual_acrescimo);

    // PROCESSAMENTO: calcula o preço de venda
    preco_venda = preco_custo + (preco_custo * percentual_acrescimo / 100);

    // SAÍDA: exibe o valor final de venda
    printf("O preco de venda do produto sera: R$ %f\n", preco_venda);

    return 0;
}
