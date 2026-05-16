#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    int rem;
    int sum - 0;
    while (N > 0)
    {
        rem = N % 10;
        N = N / 10;
        sum = rem + sum;
    }
    printf("%d\n", sum);
}