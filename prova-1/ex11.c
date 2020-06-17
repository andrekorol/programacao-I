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
        do
        {
            f *= v;
            v--;
        } while (v > 1);
        printf("%d\n", f);
    }

    return 0;
}
