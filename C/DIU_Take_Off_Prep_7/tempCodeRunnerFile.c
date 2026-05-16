#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N > 5)
    {
        int rem = N % 5;
        int sum = N / 5;
        printf("%d\n", rem + sum);
    }
    else
    {
        printf("%d\n", 1);
    }
}