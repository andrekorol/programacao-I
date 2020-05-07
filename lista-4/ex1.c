#include <stdio.h>

int main()
{
    float preco;

    puts("Entre o preco do produto vendido:");
    scanf("%f", &preco);

    if (preco > 150 && preco <= 200)
    {
        puts("Acrescimo de 5% no salario");
    }
    else if (preco > 200 && preco <= 400)
    {
        puts("Acrescimo de 10% no salario");
    }
    else if (preco > 400)
    {
        puts("Acrescimo de 15% no salario");
    }
    else
    {
        puts("Sem acrescimo no salario");
    }

    return 0;
}