#include <stdio.h>

int main()
{
    puts("Dec | Char");
    puts("----------");

    for (int i = 33; i <= 255; i++)
    {
        printf("%3d | %3c\n", i, i);
    }

    return 0;
}