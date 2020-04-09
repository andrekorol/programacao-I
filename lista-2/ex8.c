// Andre Rossi Korol - 01810067
// EComp-5UNA

#include <stdio.h>

int main()
{
    float cotacaoDolar, quantidadeDolar, valorReal;

    puts("Entre o valor da cotacao do dolar (em R$):");
    scanf("%f", &cotacaoDolar);
    puts("Entre a quantidade de dolares disponiveis:");
    scanf("%f", &quantidadeDolar);

    valorReal = cotacaoDolar * quantidadeDolar;
    printf("Conversao: US$%.2f = R$%.2f\n", quantidadeDolar, valorReal);

    return 0;
}
