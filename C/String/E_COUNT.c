#include <stdio.h>
#include <string.h>

int main()
{
    long long N;
    scanf("%lld", &N);
    int rem;
    long long sum = 0;
    while (N > 0)
    {
        rem = N % 10;
        N = N / 10;
        sum = rem + sum; //2
    }
    printf("%lld\n", sum);
}