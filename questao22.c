//22
//Entrar via teclado com o valor de cinco produtos. Após as entradas, digitar um valor referente ao pagamento da somatória destes valores. Calcular e exibir o troco que deverá ser devolvido.

#include <stdio.h>

int main() {
    float produto1, produto2, produto3, produto4, produto5;
    float total, pagamento, troco;

    // Entrada dos valores dos produtos
    printf("Digite o valor do primeiro produto: ");
    scanf("%f", &produto1);

    printf("Digite o valor do segundo produto: ");
    scanf("%f", &produto2);

    printf("Digite o valor do terceiro produto: ");
    scanf("%f", &produto3);

    printf("Digite o valor do quarto produto: ");
    scanf("%f", &produto4);

    printf("Digite o valor do quinto produto: ");
    scanf("%f", &produto5);

    // Calcula o total da compra
    total = produto1 + produto2 + produto3 + produto4 + produto5;

    // Mostra o total da compra
    printf("\nTotal da compra: R$ %f\n", total);

    // Entrada do valor pago pelo cliente
    printf("Digite o valor do pagamento: ");
    scanf("%f", &pagamento);

    // Calcula o troco a ser devolvido
    troco = pagamento - total;

    // Exibe o troco
    printf("Troco a ser devolvido: R$ %f\n", troco);

    return 0;
}

