//37
//Fa�a um algoritmo que receba o custo de um espet�culo teatral e o pre�o do convite esse espet�culo. Esse programa deve calcular e mostrar:
//�A quantidade de convites que devem ser vendidos para que pelo menos o custo do espet�culo seja alcan�ado.
//�A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.

#include <stdio.h> 

int main() {
    float custo, preco; // Vari�veis para armazenar o custo e o pre�o do convite
    int convites_custo, convites_lucro; // Vari�veis para guardar a quantidade de convites

    // Solicita o custo total do espet�culo
    printf("Custo do espetaculo: ");
    scanf("%f", &custo); // L� o valor digitado e armazena em 'custo'

    // Solicita o pre�o de cada convite
    printf("Preco do convite: ");
    scanf("%f", &preco); // L� o valor digitado e armazena em 'preco'

    // Calcula a quantidade de convites necess�rios para cobrir o custo
    // Adiciona 0.9999 para simular o arredondamento para cima sem usar math.h
    convites_custo = custo / preco + 0.9999;

    // Calcula a quantidade de convites para ter 23% de lucro (custo * 1.23)
    convites_lucro = (custo * 1.23) / preco + 0.9999;

    // Exibe os resultados na tela
    printf("Convites para cobrir o custo: %d\n", convites_custo);
    printf("Convites para lucro de 23%%: %d\n", convites_lucro);

    return 0; // Fim do programa
}

