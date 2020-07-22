#include <stdio.h>

int main()
{
    int matriz[5][5] = {
        {1, 5, 7, 2, 1},
        {4, 6, 8, 2, 2},
        {3, 3, 3, 3, 3},
        {3, 4, 1, 3, 3},
        {5, 3, 1, 3, 3}};

    int s = 0;

    int k = 4;

    int i = 0;

    for (int j = 0; j <= 4; j++)
    {
        s += matriz[j][k - i];

        i++;
    }
    printf("%d\n", s);

    return 0;
}
