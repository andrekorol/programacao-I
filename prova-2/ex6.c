#include <stdio.h>

int f(int n)
{
    if (n < 2)
        return n;

    else
        return f(n - 1) + f(n - 2);
}

int main()
{
    int x = f(8);
    printf("%d\n", x);

    return 0;
}
