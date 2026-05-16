#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int ar[N][M];
    int ac[M + N];
    int k = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
}