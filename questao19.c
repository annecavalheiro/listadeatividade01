//19
//Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a área total existente.

#include <stdio.h>

int main() {
    float largura, comprimento, area;

    // Entrada: lê a largura do lote
    printf("Digite a largura do lote de terra: ");
    scanf("%f", &largura);

    // Entrada: lê o comprimento do lote
    printf("Digite o comprimento do lote de terra: ");
    scanf("%f", &comprimento);

    // Processamento: calcula a área do lote (largura x comprimento)
    area = largura * comprimento;

    // Saída: imprime a área calculada com duas casas decimais
    printf("A área total do lote e: %f metros quadrados\n", area);

    return 0;
}

