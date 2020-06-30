#include <stdio.h>
#include <math.h>

int main()
{
    for (double x = 0; x <= 10; x += 0.5)
        printf("log(%.1f) = %lf\n", x, log(x));

    return 0;
}
