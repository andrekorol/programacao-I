#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z;

    puts("Entre a altura x:");
    scanf("%lg", &x);
    puts("Entre a distancia y:");
    scanf(" %lf", &y);

    z = sqrt(pow(x, 2) + pow(y, 2));
    printf("Distancia que Carlos tera que percorrer = %g\n", z);

    return 0;
}
