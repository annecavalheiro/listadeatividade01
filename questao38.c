//38
//Elabore um algoritmo para efetuar o cálculo da quantidade de combustível gasto em uma viagem, utilizando-se um automóvel que faz 12 Kms por litro. Para obter o cálculo, o usuário deverá fornecer o
//tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter a distância percorrida (distância = tempo * velocidade).

#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros;

    // ENTRADA: tempo da viagem em horas
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    // ENTRADA: velocidade média em km/h
    printf("Digite a velocidade media durante a viagem (em km/h): ");
    scanf("%f", &velocidade);

    // PROCESSAMENTO: calcular a distância percorrida
    distancia = tempo * velocidade;

    // PROCESSAMENTO: calcular quantidade de litros gastos (carro faz 12 km/l)
    litros = distancia / 12;

    // SAÍDA: mostrar a quantidade de combustível gasto
    printf("Quantidade de combustivel gasto na viagem: %f litros\n", litros);

    return 0;
}

