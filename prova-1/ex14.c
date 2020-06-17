#include <stdio.h>

int main()
{
    int na, ca, s, c, n, m;

    scanf("%d", &na);
    scanf("%d", &ca);

    for (int i = 1; i <= na; i++)
    {
        s = 0;
        c = 0;

        while (c < ca)
        {
            scanf("%d", &n);
            s += n;
            c++;
        }
        m = s / c;
        printf("%d\n", m);
    }

    return 0;
}
