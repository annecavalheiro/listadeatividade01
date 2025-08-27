//8
//Faça um programa que receba um número inteiro, calcule e imprima:
//• a raiz quadrada desse número;
//• esse número elevado ao quadrado.

#include <stdio.h>

int main() {
    int numero;
    double raiz_quadrada, ao_quadrado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Nao e possivel calcular raiz quadrada de numero negativo.\n");
    } else {
        // Aproximação da raiz quadrada usando método de Newton (alguma iteração)
        double x = numero;
        double y = 1;
        double e = 0.00001; // precisão

        while (x - y > e) {
            x = (x + y) / 2;
            y = numero / x;
        }

        raiz_quadrada = x;

        printf("Raiz quadrada aproximada de %d: %.5f\n", numero, raiz_quadrada);
    }

    ao_quadrado = numero * numero;
    printf("%d elevado ao quadrado: %d\n", numero, (int)ao_quadrado);

    return 0;
}

