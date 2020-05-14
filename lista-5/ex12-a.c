// primeiro fluxograma
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int f = 1;
    do
    {
        f *= n;
        n--;
    } while (n > 1);

    printf("%d\n", f);

    return 0;
}