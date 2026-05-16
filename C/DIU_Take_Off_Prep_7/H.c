#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N > 5)
    {
        int sum = N / 5;
        int rem = N % 5;
        if (rem > 0)
        {
            printf("%d\n", 1 + sum);
        }
        else
        {
            printf("%d\n", sum);
        }
    }
    else if (N == 5)
    {
        printf("%d\n", 1);
    }
    else if (N == 0)
    {

        printf("%d\n", 0);
    }
    else
    {
        printf("%d\n", 1);
    }
}