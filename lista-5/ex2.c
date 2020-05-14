#include <stdio.h>

int main()
{
    int a = 5; // faltando ';' no final
    int y = 0;
    int n = 0;
    scanf("%d", &n); // faltando '&' para referenciar o endereço
                     // da variável 'n' na memória
    while (a <= n)
    // ; ';' desnecessário
    {
        y = a++;
        printf("%x", y);
    }
}