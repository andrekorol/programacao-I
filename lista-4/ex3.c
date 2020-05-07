#include <stdio.h>

int main()
{
    int k, numMeio;

    scanf("%d", &k);
    numMeio = k / 3;

    printf("%d, %d e %d\n", numMeio - 1, numMeio, numMeio + 1);

    return 0;
}