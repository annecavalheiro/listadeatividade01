//13
//Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário sabendo-se que este sofreu um aumento de 25%.

#include <stdio.h>

int main() {
    float salario_atual, novo_salario;

    // ENTRADA
    printf("Digite o salario atual do funcionario: ");
    scanf("%f", &salario_atual);

    // PROCEDIMENTO
    novo_salario = salario_atual + (salario_atual * 0.25);
    // ou: novo_salario = salario_atual * 1.25;

    // SAÍDA
    printf("O novo salario com aumento de 25%% e: R$ %f\n", novo_salario);

    return 0;
}

