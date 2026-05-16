#include <stdio.h>
int main()
{
    int M;
    scanf("%d", &M);
    while (M--)
    {
        int N;
        scanf("%d", &N);
        int rem = 0;
        while (N > 0)
        {
            rem = rem + N % 10;
            N = N / 10;
        }
        printf("%d\n", rem);
    }
}