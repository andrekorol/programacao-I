#include <stdio.h>

int main()
{
    unsigned int num;
    scanf("%u", &num);

    if (num & 1)
        printf("%d eh impar\n", num);
    else
        printf("%d eh par\n", num);

    return 0;
}