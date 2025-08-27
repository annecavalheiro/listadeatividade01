//10
//Fa�a um algoritmo que calcule e imprima a �rea das seguintes figuras geom�tricas:
//� tri�ngulo; quadrado; c�rculo; trap�zio; ret�ngulo; losango.


#include <stdio.h>

int main() {
    float base, altura, lado, raio;
    float base_maior, base_menor, diagonal_maior, diagonal_menor;
    float area;
    const float pi = 3.14159265;  // Definindo pi manualmente

    // TRI�NGULO
    printf("AREA DO TRIANGULO\n");
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Area do triangulo: %f\n\n", area);

    // QUADRADO
    printf("AREA DO QUADRADO\n");
    printf("Digite o lado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("Area do quadrado: %f\n\n", area);

    // C�RCULO
    printf("AREA DO CIRCULO\n");
    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = pi * raio * raio;  // Usando pi definido manualmente

    printf("Area do circulo: %f\n\n", area);

    // TRAP�ZIO
    printf("AREA DO TRAPEZIO \n");
    printf("Digite a base maior: ");
    scanf("%f", &base_maior);
    printf("Digite a base menor: ");
    scanf("%f", &base_menor);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = ((base_maior + base_menor) * altura) / 2;

    printf("Area do trapezio: %f\n\n", area);

    // RET�NGULO
    printf("AREA DO RETANGULO\n");
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = base * altura;

    printf("Area do retangulo: %f\n\n", area);

    // LOSANGO
    printf("AREA DO LOSANGO\n");
    printf("Digite a diagonal maior: ");
    scanf("%f", &diagonal_maior);
    printf("Digite a diagonal menor: ");
    scanf("%f", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor) / 2;

    printf("Area do losango: %f\n", area);

    return 0;
}

