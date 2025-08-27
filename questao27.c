//27
//Um sistema de equações lineares da forma ax + by = c, pode ser resolvido utilizando-se as seguintes fórmulas:

#include <stdio.h>

int main() {
    // Declaração dos coeficientes
    float a, b, c, d, e, f;
    float x, y;
    float denominador;

    // Entrada dos coeficientes
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    printf("Digite o valor de d: ");
    scanf("%f", &d);

    printf("Digite o valor de e: ");
    scanf("%f", &e);

    printf("Digite o valor de f: ");
    scanf("%f", &f);

    // Cálculo do denominador (mesmo para x e y)
    denominador = a * e - b * d;

    // Cálculo de x e y usando as fórmulas
    x = (c * e - b * f) / denominador;
    y = (a * f - c * d) / denominador;

    // Saída dos resultados
    printf("\nResultado do sistema:\n");
    printf("x = %f\n", x);
    printf("y = %f\n", y);

    return 0;
}

