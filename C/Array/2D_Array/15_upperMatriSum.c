#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int ar[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    printf("\n");
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i > j)
            {
                // printf("%d ", 0);
                continue;
            }
            else
            {
                sum = sum + ar[i][j];
            }
        }
       
    }
    printf("%d",sum);
}