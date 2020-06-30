#include <stdio.h>

int main()
{
    double x, serie;

    puts("Entre o valor de x:");
    scanf("%lg", &x);

    // Usando expansao da serie de Maclaurin
    serie = 1 / (1 - x);
    printf("O valor da serie geometrica eh igual a %g\n", serie);

    return 0;
}
