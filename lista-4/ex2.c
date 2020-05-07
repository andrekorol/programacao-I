#include <stdio.h>

int main()
{
    unsigned int lados[3];
    for (int i = 0; i < 3; i++)
    {
        puts("Entre a medida de um dos lados do triangulo:");
        scanf("%u", &lados[i]);
    }
    unsigned int ladoA = lados[0], ladoB = lados[1], ladoC = lados[2];

    if (ladoA + ladoB <= ladoC || ladoA + ladoC <= ladoB || ladoB + ladoC <= ladoA)
    {
        puts("As medidas dadas nao podem representar os lados de um triangulo");
    }
    else
    {
        if (!((ladoA ^ ladoB) | (ladoB ^ ladoC)))
        {
            puts("As medidas dadas formam um triangulo equilatero");
        }
        else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
        {
            puts("As medidas dadas formam um triangulo isosceles");
        }
        else
        {
            puts("As medidas dadas formam um triangulo escaleno");
        }
    }

    return 0;
}