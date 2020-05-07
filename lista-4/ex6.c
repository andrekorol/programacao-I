#include <stdio.h>

int main()
{
    double rendaAnual, valorImposto;

    puts("Entre a renda anual do contribuinte:");
    scanf("%lf", &rendaAnual);

    if (rendaAnual <= 10000)
    {
        valorImposto = 0;
    }
    else if (rendaAnual > 10000 && rendaAnual <= 25000)
    {
        valorImposto = rendaAnual * 0.1 - 1000;
    }
    else
    {
        valorImposto = rendaAnual * 0.25 - 4750;
    }

    printf("O valor do imposto sera de R$ %.2f\n", valorImposto);

    return 0;
}