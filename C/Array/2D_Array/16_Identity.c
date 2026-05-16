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
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i > j || j > i)
            {
                if (ar[i][j] == 0)
                {
                    count++;
                }
            }
            if (i == j)
            {
                if (ar[i][j] == 1)
                {
                    count++;
                }
            }
        }
    }
    if (count == M * N)
    {
        printf("IDENTITY\n");
    }
    // printf("%d\n",count);
}