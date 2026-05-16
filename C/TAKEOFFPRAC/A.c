#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int Ar[N];
    // for (int i = 0; i < N; i++)
    // {
    // }
    int A, B;
    // ok
    int sum[N];
    int Sum = 0;
    int C = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Ar[i]);
        Sum = Ar[i] + Sum;
        // ok
        int count = 0;
        for (int i = 1; i <= Sum; i++)
        {
            if (Sum % i == 0)
            {
                count++;
            }
        }
        // okk
        sum[i] = count;
        if (sum[i] >= A && sum[i] <= B)
        {
            C++;
        }
    }
    // int count = 0;
    scanf("%d %d", &A, &B);

    for (int i = 0; i < N; i++)
    {
        if (sum[i] >= A && sum[i] <= B)
        {
            C++;
        }
    }
    printf("%d\n", C);
}