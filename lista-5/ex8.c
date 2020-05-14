#include <stdio.h>

int main()
{
    int i;
    float valores[3];
    float media;

    for (i = 0; i < 3; i++)
    {
        scanf("%f", &valores[i]);
        media += valores[i];
    }
    media /= 3;

    printf("Media aritmetica = %.2f\n", media);

    return 0;
}