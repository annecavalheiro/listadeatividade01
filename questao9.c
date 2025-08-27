//9
//Faça um algoritmo que receba o valor do salário de um funcionário e o valor do salário mínimo. Calcule e imprima quantos salários mínimos ganha esse funcionário.

#include <stdio.h>

int main() {
    float salario_funcionario, salario_minimo, quantidade;

    // ENTRADA
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario_funcionario);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    // PROCEDIMENTO
    quantidade = salario_funcionario / salario_minimo;

    // SAÍDA
    printf("O

