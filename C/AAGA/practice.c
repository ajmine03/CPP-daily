#include <stdio.h>
int main()
{
    int k, w;
    long long n;
    scanf("%d %lld %d", &k, &n, &w);

    long long total_cost = k * (w * (w + 1)) / 2;
    long long borrow = total_cost - n;

    if (borrow < 0)
        borrow = 0;

    printf("%lld\n", borrow);
    return 0;
}
