#include <stdio.h>

int main()
{
    for (int i = 0; i < 1000; i++)
        printf("%d %d\n", i + 1, 1000 - i);

    return 0;
}