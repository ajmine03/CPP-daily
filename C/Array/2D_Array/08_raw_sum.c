#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    int arr_2[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    

    for (int i = 0; i < N; i++)
    {   int sum = 0;
        
        for (int j = 0; j < M; j++)
        {
            printf("%d ", arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf(" = %d",sum);
        printf("\n");
    }
    

   
}