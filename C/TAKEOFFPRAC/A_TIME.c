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
        // ok
        Sum = Ar[i] + Sum;
        //ok
        sum[i] = Sum;
        //ok
    }
    // for (int i = 0; i < N; i++)
    // {
    //     printf("     %d\n",sum[i]);
    // }
    // printf("     %d\n", Sum);

    int count = 0;
    int k = 0;
    // printf("  %d",sum[k]);
    for (int i = 1; i <= sum[k]; i++)
    {
        printf("  %d\n",sum[k]); 
        if (sum[k] % i == 0)
        {
            count++;
        }
        
        sum[k] = count;
        k++;
    }
    // okk
    // if (sum[i] >= A && sum[i] <= B)
    // {
    //     C++;
    // }
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