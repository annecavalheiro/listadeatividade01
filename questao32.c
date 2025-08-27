//32
//Faça um algoritmo que apresente, para um salário informado pelo usuário, um novo salário com aumento de 37%.

#include <stdio.h>

int main() {
    float salario_atual, novo_salario;

    // ENTRADA: solicita o salário atual
    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario_atual);

    // PROCESSAMENTO: calcula o novo salário com aumento de 37%
    novo_salario = salario_atual + (salario_atual * 0.37);

    // SAÍDA: exibe o novo salário
    printf("O novo salário com aumento de 37%% e : R$ %f\n", novo_salario);

    return 0;
}

