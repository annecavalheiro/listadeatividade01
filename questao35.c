//35
//Faça um algoritmo que receba o peso e a altura de uma pessoa e calcule o índice de massa corpórea.
//Ele mede a relação entre peso e altura (peso em Kg, dividido pelo quadrado da altura em metros).

#include <stdio.h>

int main() {
    float peso, altura, imc;

    // ENTRADA: ler peso em kg
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    // ENTRADA: ler altura em metros
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // PROCESSAMENTO: calcular o IMC
    imc = peso / (altura * altura);

    // SAÍDA: mostrar o resultado do IMC
    printf("O índice de massa corporal (IMC) e: %f\n", imc);

    return 0;
}

