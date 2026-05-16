#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int R = N + N;
    for (int i = 0; i < R; i++)
    {
        for (int i = 0; i < N; i++)
        {
            printf(" ")
            printf("*");
        }
        printf("\n");
    }
}