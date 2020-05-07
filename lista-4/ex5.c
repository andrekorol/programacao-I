#include <stdio.h>

int main()
{
    int n;

    puts("Entre um numero:");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        puts("1 ler romance");
        break;

    case 2:
        puts("2 fazer hamburgueres");
        break;

    case 3:
        puts("3 jogar xadrez");
        break;

    case 4:
        puts("4 fazer palavras cruzadas");
        break;

    case 5:
        puts("5 lavar roupa");
        break;

    case 6:
        puts("6 regar as plantas");
        break;

    case 7:
        puts("3 e 7 jogam xadrez");
        break;

    default:
        puts("So haviam 7 irmas");
        break;
    }

    return 0;
}