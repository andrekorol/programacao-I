#include <stdio.h>
#include <math.h>

int main()
{
    float cabo, base, altura;

    puts("Entre a medida C dos cabos:");
    scanf("%f", &cabo);
    puts("Entre a distancia B dos ganchos ate a base da torre:");
    scanf(" %f", &base);

    altura = sqrt(cabo * cabo - base * base);
    printf("A altura da torre eh igual a %.2f metros\n", altura);

    return 0;
}
