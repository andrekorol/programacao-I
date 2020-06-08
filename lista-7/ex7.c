#include <stdio.h>

int main()
{
    // The Fibonacci sequence : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
    int n, tmp, a = 0, b = 1;

    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        tmp = a + b;
        a = b;
        b = tmp;
    }
    printf("%d\n", b);

    return 0;
}