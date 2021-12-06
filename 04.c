#include <stdio.h>
#include <math.h>

int main(){

    float raio, perimetro, area;

    printf("Insira o raio do circulo: ");
    scanf("%f", &raio);

    perimetro = 2*M_PI*raio;
    area = M_PI*pow(raio,2);

    printf("O perimetro do circulo e %.2f e area e %.2f", perimetro, area);

    return 0;
}