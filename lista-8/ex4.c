#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d", &m);
    scanf(" %d", &n);
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            printf("%d, %d\n", i, j);
    return 0;
}
