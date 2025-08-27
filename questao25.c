//25
//Uma pessoa resolveu fazer uma aplicação em uma poupança programada.
//Para calcular seu rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses. Sabendo-se que a fórmula usada para este cálculo é:

#include <stdio.h>

int main() {
    float P, i, S;
    int n;

    // Entrada de dados
    printf("Digite o valor da aplicacao mensal (P): ");
    scanf("%f", &P);

    printf("Digite a taxa de juros mensal (em %%): ");
    scanf("%f", &i);

    // Como não usaremos laço, fixamos o número de meses para 3
    n = 3;

    // Converte a taxa para decimal
    i = i / 100;

    // Calcula (1 + i)^1, (1 + i)^2, (1 + i)^3 manualmente
    float fator1 = (1 + i);
    float fator2 = fator1 * (1 + i);
    float fator3 = fator2 * (1 + i);

    // Fórmula expandida manualmente: S = P * [((1 + i)^n - 1) / i]
    float acumulado = (fator3 - 1) / i;
    S = P * acumulado;

    // Saída
    printf("O valor acumulado ao final de 3 meses sera: R$ %f\n", S);

    return 0;
}

