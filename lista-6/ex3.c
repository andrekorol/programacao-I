#include <stdio.h>

int main()
{
    char primeiro, segundo;

    puts("Entre o primeiro caractere: ");
    scanf(" %c", &primeiro);
    puts("Entre o segundo caractere: ");
    scanf(" %c", &segundo);

    if (primeiro < segundo)
    {
        printf("Na tabela ASCII, %c vem antes de %c\n", primeiro, segundo);
    }
    else if (primeiro > segundo)
    {
        printf("Na tabela ASCII, %c vem depois de %c\n", primeiro, segundo);
    }
    else
    {
        printf("%c eh igual a %c\n", primeiro, segundo);
    }

    return 0;
}