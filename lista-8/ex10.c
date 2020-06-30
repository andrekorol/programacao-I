#include <stdio.h>
#include <math.h>
#include <complex.h>

#define E 2.71828

int main()
{
    char inflexao = 0;
    double complex z;
    double y;

    puts("Os valores (pontos) da funcao sao:");
    for (int x = -10; x <= 10; x++)
    {
        z = cpow(x, E);
        y = cabs(z);
        if (creal(z) < 0)
            y *= -1;
        if (!inflexao && cimag(z) == 0)
        {
            inflexao++;
            printf("Ponto de inflexao: ");
        }
        printf("(%d, %g)\n", x, y);
    }

    return 0;
}
