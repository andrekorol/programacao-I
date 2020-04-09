// Andre Rossi Korol - 01810067
// EComp-5UNA

#include <stdio.h>

int main()
{
    int a, b, soma;

    puts("Entre o primeiro numero:");
    scanf("%d", &a);
    puts("Entre o segundo numero:");
    scanf("%d", &b);

    soma = a + b;
    printf("Resultado da soma: %d + %d = %d\n", a, b, soma);

    return 0;
}
