//34
//Cada degrau de uma escada tem uma altura X. Faça um algoritmo que receba essa altura e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá
//subir para atingir seu objetivo.

#include <stdio.h>

int main() {
    float altura_degrau, altura_desejada;
    int degraus;

    // ENTRADA: altura de cada degrau
    printf("Digite a altura de cada degrau (em metros): ");
    scanf("%f", &altura_degrau);

    // ENTRADA: altura que deseja alcançar
    printf("Digite a altura que deseja alcançar (em metros): ");
    scanf("%f", &altura_desejada);

    // PROCESSAMENTO: calcula quantos degraus subir (arredonda para cima)
    degraus = (int)(altura_desejada / altura_degrau);

    // Se não for divisível exatamente, sobe mais um degrau
    if ((altura_desejada / altura_degrau) > degraus) {
        degraus = degraus + 1;
    }

    // SAÍDA: exibe o número de degraus
    printf("Voce devera subir %d degrau(s) para atingir a altura desejada.\n", degraus);

    return 0;
}

