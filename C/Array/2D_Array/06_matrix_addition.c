#include<stdio.h>
int main(){
    int N, M ;
    scanf("%d %d",&N,&M);
    int arr[N][M];
    int arr_2[N][M];

    printf("Input the first matrix :\n");
    for(int i = 0;i<N;i++){
        for(int j = 0; j<M;j++){
            printf("element - [%d][%d] : ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Input the Second matrix :\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("element - [%d][%d] : ", i, j);
            scanf("%d", &arr_2[i][j]);
        }
    }
    printf("The First Matrix is :\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("The Second Matrix is :\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", arr_2[i][j]);
        }
        printf("\n");
    }

    printf("The Additional of two matrix is :\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", arr[i][j] + arr_2[i][j]);
        }
        printf("\n");
    }
}