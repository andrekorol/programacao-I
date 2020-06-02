#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int n;

    puts("Digite o numero: ");
    scanf("%u", &n);

    puts("Os primos sao:");

    // Printa a quantidade de 2s que dividem n
    while (n % 2 == 0)
    {
        printf("%d\n", 2);
        n /= 2;
    }

    // n deve ser impar neste ponto, entao podemos pular um
    // elemento (i.e., podemos fazer com que i += 2 no loop)
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        // Enquanto i divide n, printa i e divide n por i
        while (n % i == 0)
        {
            printf("%d\n", i);
            n /= i;
        }
    }

    // Condicao para os casos em que n eh primo e maior que 2
    if (n > 2)
        printf("%d\n", n);

    return 0;
}