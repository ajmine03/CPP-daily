#include <stdio.h>
#include<math.h>
int main()
{
    long long x, n, m;
    scanf("%lld %lld %lld", &x, &n, &m);
    long long sum = n + m;

    long long a = ((x*n/(sum)));
    long long b = ((x*m/(sum)));

    printf("%lld %lld\n", a, b);
}