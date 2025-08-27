//37
//Faça um algoritmo que receba o custo de um espetáculo teatral e o preço do convite esse espetáculo. Esse programa deve calcular e mostrar:
//•A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado.
//•A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.

#include <stdio.h> 

int main() {
    float custo, preco; // Variáveis para armazenar o custo e o preço do convite
    int convites_custo, convites_lucro; // Variáveis para guardar a quantidade de convites

    // Solicita o custo total do espetáculo
    printf("Custo do espetaculo: ");
    scanf("%f", &custo); // Lê o valor digitado e armazena em 'custo'

    // Solicita o preço de cada convite
    printf("Preco do convite: ");
    scanf("%f", &preco); // Lê o valor digitado e armazena em 'preco'

    // Calcula a quantidade de convites necessários para cobrir o custo
    // Adiciona 0.9999 para simular o arredondamento para cima sem usar math.h
    convites_custo = custo / preco + 0.9999;

    // Calcula a quantidade de convites para ter 23% de lucro (custo * 1.23)
    convites_lucro = (custo * 1.23) / preco + 0.9999;

    // Exibe os resultados na tela
    printf("Convites para cobrir o custo: %d\n", convites_custo);
    printf("Convites para lucro de 23%%: %d\n", convites_lucro);

    return 0; // Fim do programa
}

