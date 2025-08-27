//15
//Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
//• o peso dessa pessoa em gramas;
//• se essa pessoa engordar 5%, qual será seu novo peso em gramas.

#include <stdio.h>

int main() {
    int peso_kg;
    float peso_gramas, novo_peso;

    // ENTRADA
    printf("Digite o peso da pessoa (em kg): ");
    scanf("%d", &peso_kg);

    // PROCEDIMENTO
    peso_gramas = peso_kg * 1000;              // 1 kg = 1000 g
    novo_peso = peso_gramas * 1.05;            // Aumento de 5%

    // SAÍDA
    printf("Peso em gramas: %f g\n", peso_gramas);
    printf("Peso com aumento de 5%%: %2f g\n", novo_peso);

    return 0;
}

