#include <stdio.h>
int main()
{
    long long P, Q, R;
    scanf("%lld %lld %lld", &P, &Q, &R);
    long long distance = R + (Q - P) + (Q - P) + R;
    printf("%lld\n", distance);
}