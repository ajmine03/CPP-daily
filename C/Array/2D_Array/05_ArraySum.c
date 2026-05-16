#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int array[N][M];
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &array[i][j]);
            sum = array[i][j] + sum;
        }
    }
    printf("Sum = %d\n", sum);
}