#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int Arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }
    for (int j = 0; j < M; j++)
    {
        for (int i = 0; i < N; i++)
        {
            printf("%d ",Arr[i][j]);
        }
        printf("\n");
    }
}