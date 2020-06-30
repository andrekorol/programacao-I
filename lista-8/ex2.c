#include <stdio.h>

int main()
{
    unsigned int num;
    float temp, raiz;

    puts("Entre um numero inteiro e positivo:");
    scanf("%u", &num);

    raiz = num / 2;
    temp = 0;
    while (raiz != temp)
    {
        temp = raiz;
        raiz = (num / temp + temp) / 2;
    }
    printf("%.0f\n", raiz);

    return 0;
}
