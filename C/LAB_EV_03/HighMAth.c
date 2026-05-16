#include <stdio.h>
int main()
{
    long long x, n, m;
    scanf("%lld %lld %lld", &x, &n, &m);
    long long sum = n + m;

    long long a = ((x / (sum)) * n);
    long long b = ((x / (sum)) * m);

    printf("%lld %lld\n", a, b);
}