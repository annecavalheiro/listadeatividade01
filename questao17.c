//17
//Crie um programa que receba tr�s nomes quaisquer por meio da linha de execu��o do programa, e os imprima na tela da seguinte maneira: o primeiro e o �ltimo nomes ser�o impressos na primeira linha
//um ap�s o outro, o outro nome (o segundo) ser� impresso na segunda linha.

 #include <stdio.h>

int main() {
    char nome1[50];
    char nome2[50];
    char nome3[50];

    printf("Digite o nome 1: ");
    scanf("%s", nome1);

    printf("Digite o nome 2: ");
    scanf("%s", nome2);

    printf("Digite o nome 3: ");
    scanf("%s", nome3);

    printf("%s %s\n", nome1, nome3);
    printf("%s\n", nome2);

    return 0;
}

