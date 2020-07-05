#include <stdio.h>
#include <math.h>

int main()
{
    int t = 3;
    double x, N, v = 2.9;

    x = log2(v) / (t * log2(2));
    printf("x = %g\n", x);

    for (; t <= 10; t++)
    {
        v = pow(2, x * t);
        N = 2000 * v;
        printf("N(%d) = %g\n", t, N);
    }

    return 0;
}
