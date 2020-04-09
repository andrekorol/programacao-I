// Andre Rossi Korol - 01810067
// EComp-5UNA

#include <stdio.h>

typedef long long ll;

int main()
{
    ll n, f;
    scanf("%lld", &n);
    f = 1;
    while (n > 1)
    {
        f *= n;
        n--;
    }
    printf("%lld\n", f);

    return 0;
}
