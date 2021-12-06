#include <stdio.h>

int main() {

    float salario, kilowatt, precoKilowatt, valorPago, valorDesconto;

    printf("Insira o valor do salario minimo: ");
    scanf("%f", &salario);
    printf("Insira a quantidade de kilowatt gasta em sua casa: ");
    scanf("%f",&kilowatt);
    
    precoKilowatt = salario/700;
    valorPago = kilowatt*precoKilowatt;
    valorDesconto = 0.90*valorPago;

    printf("O valor de cada kilowatt e R$%.2f\n", precoKilowatt);
    printf("O valor a ser pago sera R$%.2f\n", valorPago);
    printf("O valor com desconto e R$%.2f\n", valorDesconto);

return 0;
}