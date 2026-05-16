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
            if(i+j == N-1 ){
                 count = count + ar[i][j];
                // printf("%d \n",ar[i][j]);
            }
        }
    }
    // if (count == M * N)
    // {
    //     printf("IDENTITY\n");
    // }
    printf("%d\n", count);
}