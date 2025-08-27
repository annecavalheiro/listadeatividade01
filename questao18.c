//18
//Faça um programa que receba a quantidade e o valor de três produtos, no seguinte formato: quantidade1 valor1 quantidade2 valor2 quantidade3 valor3. O programa deve calcular esses valores seguindo a fórmula total = quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3.
// O valortotal deve ser apresentado no final da execução do programa.

#include <stdio.h>  // Biblioteca para entrada e saída

int main() {
    int q1, q2, q3;        // Quantidades dos produtos
    float v1, v2, v3;      // Valores unitários dos produtos
    float total;           // Valor total da compra

    // Entrada - quantidade e valor do primeiro produto
    printf("Insira a quantidade do primeiro produto: ");
    scanf("%d", &q1);
    printf("Insira o valor do primeiro produto (use ponto para decimais): ");
    scanf("%f", &v1);

    // Entrada - quantidade e valor do segundo produto
    printf("Insira a quantidade do segundo produto: ");
    scanf("%d", &q2);
    printf("Insira o valor do segundo produto (use ponto para decimais): ");
    scanf("%f", &v2);

    // Entrada - quantidade e valor do terceiro produto
    printf("Insira a quantidade do terceiro produto: ");
    scanf("%d", &q3);
    printf("Insira o valor do terceiro produto (use ponto para decimais): ");
    scanf("%f", &v3);

    // Cálculo do valor total
    total = (q1 * v1) + (q2 * v2) + (q3 * v3);

    // Saída - valor total formatado com 2 casas decimais
    printf("O valor total e: R$ %f\n", total);

    return 0;
}

