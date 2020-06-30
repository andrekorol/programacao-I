#include <stdio.h>

int main()
{
    int n, i, negativos = 0;
    float mediaNegativos = 0;

    puts("Entre a quantidade (n) de numeros a ser entrada:");
    scanf("%d", &n);
    while (n--)
    {
        puts("Entre um numero:");
        scanf(" %d", &i);
        if (i < 0)
        {
            negativos++;
            mediaNegativos += i;
        }
    }
    printf("Media aritmetica dos numeros negativos = %.2f\n", mediaNegativos / negativos);

    return 0;
}
