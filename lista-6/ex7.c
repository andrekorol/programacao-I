#include <stdio.h>

int main()
{
    puts("Dec | Hx | Char");
    puts("---------------");
    for (int i = 0; i <= 127; i++)
        printf("%3d | %2x | %c\n", i, i, i);

    return 0;
}