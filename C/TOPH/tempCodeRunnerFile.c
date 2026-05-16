#include <stdio.h>
int main()
{
    int N, X;
    int Arr[10];
    int sum = 0;
    int count = N;
    scanf("%d %d", &N, &X);
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &Arr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (Arr[i] == 0)
        {
            sum = 1 + sum;
            N = N - (i + 1);
            if (N == 0)
            {
                break;
            }
        }
    }

    // printf("%d\n",sum);
    if (sum == X && N <= 0)
    {
        printf("Happy\n");
    }
    else
    {
        printf("Sad\n");
    }
}