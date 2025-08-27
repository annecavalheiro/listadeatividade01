//7
//Faça um algoritmo que receba dois números, calcule e imprima um elevado ao outro.

#include <stdio.h>
#include <math.h>

int main() {
    float base, expoente, resultado;

    // ENTRADA
    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%f", &expoente);

    // PROCEDIMENTO
    resultado = pow(base, expoente);

    // SAÍDA
    printf("%f elevado a %f e igual a %f\n", base, expoente, resultado);

    return 0;
}

