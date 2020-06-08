#include <stdio.h>

int main()
{
    int primeiro, segundo, i;

    puts("Entre o primeiro valor:");
    scanf("%d", &primeiro);
    puts("Entre o segundo valor:");
    scanf("%d", &segundo);

    if (primeiro < segundo)
        for (i = primeiro; i <= segundo; i++)
            (i != segundo) ? printf("%d, ", i) : printf("%d\n", i);
    else if (primeiro > segundo)
        for (i = primeiro; i >= segundo; i--)
            (i != segundo) ? printf("%d, ", i) : printf("%d\n", i);
    else
        puts("valores iguais");

    return 0;
}