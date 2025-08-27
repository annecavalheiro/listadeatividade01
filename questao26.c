//Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos (em KM) e uma determinada velocidade (km/h), diga qual o tempo médio que levará para chegada a esse local e
//qual a velocidade em metros/segundo.

#include <stdio.h>

int main() {
    float distancia_km, velocidade_kmh;
    float tempo_horas, velocidade_ms;
    int horas, minutos;

    // Entrada: distância e velocidade
    printf("Digite a distância entre os pontos (em km): ");
    scanf("%f", &distancia_km);

    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &velocidade_kmh);

    // Processamento: tempo médio da viagem em horas
    tempo_horas = distancia_km / velocidade_kmh;

    // Converte tempo em horas para horas e minutos inteiros
    horas = (int)tempo_horas;
    minutos = (int)((tempo_horas - horas) * 60);

    // Conversão da velocidade para m/s
    velocidade_ms = velocidade_kmh / 3.6;

    // Saída dos resultados
    printf("\nTempo estimado de viagem: %d horas e %d minutos\n", horas, minutos);
    printf("Velocidade em metros por segundo: %f m/s\n", velocidade_ms);

    return 0;
}

