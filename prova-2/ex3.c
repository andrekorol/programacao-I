#include <stdio.h>
#include <math.h>

int main()
{
    int x = -5;

    int y[11];

    int i = 0;

    int k = 0;

    while (i <= 10)
    {

        y[i] = pow(x, 3);

        if (x == -2)
        {

            k = y[i];
            break;
        }
        x++;

        i++;
    }
    printf("%d,%d)\n", x, k);

    return 0;
}
