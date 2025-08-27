//21
//Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem o comprimento, a largura e a profundidade da piscina a ser construída
//Leve em consideração que o valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3

#include <stdio.h>

int main() {
    float comprimento, largura, profundidade, volume, custo_total;
    const float PRECO_POR_M3 = 45.00;  // preço fixo por metro cúbico

    // Entrada do comprimento
    printf("Digite o comprimento da piscina (em metros): ");
    scanf("%f", &comprimento);

    // Entrada da largura
    printf("Digite a largura da piscina (em metros): ");
    scanf("%f", &largura);

    // Entrada da profundidade
    printf("Digite a profundidade da piscina (em metros): ");
    scanf("%f", &profundidade);

    // Cálculo do volume da piscina
    volume = comprimento * largura * profundidade;

    // Cálculo do custo total da construção
    custo_total = volume * PRECO_POR_M3;

    // Exibição dos dados e resultados
    printf("\nDetalhes da Piscina\n");
    printf("Comprimento: %f m\n", comprimento);
    printf("Largura: %f m\n", largura);
    printf("Profundidade: %f m\n", profundidade);
    printf("Volume da piscina: %f m\n", volume);
    printf("Preço por m: R$ %f\n", PRECO_POR_M3);
    printf("Custo total da construcao e : R$ %f\n", custo_total);

    return 0;
}
