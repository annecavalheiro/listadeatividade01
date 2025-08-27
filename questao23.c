//23
//Escreva um algoritmo para trocar os valores de três variáveis A, B e C de modo que A fique com o valor de B, B fique com o valor de C e C fique com o valor de A.


#include <stdio.h>

int main() {
    int A, B, C, temp;

    // Entrada dos valores iniciais
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Mostra os valores originais
    printf("\nValores originais:\nA = %d\nB = %d\nC = %d\n", A, B, C);

    // Troca os valores conforme solicitado
    temp = A;  // guarda o valor original de A
    A = B;     // A recebe valor de B
    B = C;     // B recebe valor de C
    C = temp;  // C recebe valor original de A

    // Mostra os valores após a troca
    printf("\nValores após a troca:\nA = %d\nB = %d\nC = %d\n", A, B, C);

    return 0;
}

