#include <stdio.h>

int main()
{
    int v;
    int n = 2;
    int f;
    for (int i = 1; i <= n; i++)
    {
        f = 1;
        scanf("%d", &v);
        while (v > 1)
        {
            f *= v;
            v--;
        }
        printf("%d\n", f);
    }

    return 0;
}
