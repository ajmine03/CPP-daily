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
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i == j)
            {
                sum = sum + ar[i][j];
            }
        }
    }
    printf("%d\n", sum);
}