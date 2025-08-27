//11
//Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado.

#include <stdio.h>
#include <math.h> // Necessária para usar pow()

int main() {
    float diagonal, area;

    // ENTRADA
    printf("Digite o valor da diagonal do quadrado: ");
    scanf("%f", &diagonal);

    // PROCEDIMENTO
    area = (pow(diagonal, 2)) / 2;

    // SAÍDA
    printf("A area do quadrado e: %f\n", area);

    return 0;
}

