#include <stdio.h>
#include <math.h>

int main(){

    float lado, perimetro, area, diagonal;

    printf("Insira o valor do lado do quadradro: ");
        scanf("%f", &lado);

    perimetro = 4*lado;
    area = pow(lado,2);
    diagonal = lado*sqrt(2);

    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}