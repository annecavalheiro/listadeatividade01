//36
//Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária.
//Sendo informados, através do teclado, o número de apartamentos do hotel e o valor da diária por apartamento para o final de semana completo, elabore um programa para calcular:
//• Valor promocional da diária;
//• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%;
//• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%;
//• Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.

#include <stdio.h>

int main() {
    int num_apartamentos;
    float valor_diaria, valor_promocional;
    float total_100, total_70, perda;

    // ENTRADA: número de apartamentos
    printf("Digite o numero de apartamentos do hotel: ");
    scanf("%d", &num_apartamentos);

    // ENTRADA: valor da diária por apartamento
    printf("Digite o valor da diaria por apartamento (final de semana completo): ");
    scanf("%f", &valor_diaria);

    // PROCESSAMENTO: calcular valor promocional com 25% de desconto
    valor_promocional = valor_diaria * 0.75; // 75% do valor original

    // PROCESSAMENTO: valor total com 100% de ocupação
    total_100 = valor_promocional * num_apartamentos;

    // PROCESSAMENTO: valor total com 70% de ocupação
    total_70 = total_100 * 0.7;

    // PROCESSAMENTO: valor que o hotel deixa de arrecadar por causa do desconto,
    // no caso de 100% de ocupação
    perda = (valor_diaria * num_apartamentos) - total_100;

    // SAÍDA: mostrar os resultados
    printf("Valor promocional da diaria: R$ %f\n", valor_promocional);
    printf("Valor total arrecadado com 100%% de ocupacao: R$ %f\n", total_100);
    printf("Valor total arrecadado com 70%% de ocupacao: R$ %f\n", total_70);
    printf("Valor que o hotel deixara de arrecadar devido a promocao (100%% ocupacao): R$ %f\n", perda);

    return 0;
}

