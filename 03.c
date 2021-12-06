#include <stdio.h>
#include <math.h>

int main (){

    float base, altura, perimetro, area, diagonal;

    printf("Informe a base e a altura do retangulo: ");
    scanf("%f %f", &base, &altura);

    perimetro = 2*base + 2*altura;
    area = base*altura;
    diagonal = sqrt(pow(base,2) + pow(altura,2));

    printf("Perimetro: %.1f\n", perimetro);
    printf("Area: %.1f\n", area);
    printf("Diagonal: %.1f\n", diagonal);

    return 0;
}