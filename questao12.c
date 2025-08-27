//12
//Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor do imposto de renda a ser pago, sabendo que o imposto equivale a 5% do salário.

#include <stdio.h>

int main() {
    float salario, imposto;

    // ENTRADA
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    // PROCEDIMENTO
    imposto = salario * 0.05;

    // SAÍDA
    printf("O valor do imposto de renda a ser pago e: R$ %f\n", imposto);

    return 0;
}

