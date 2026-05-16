#include<stdio.h>
int main(){
    int N , M ;
    scanf("%d %d",&N,&M);

    int Array[N][M];

    for(int i = 0;  i<N;i++){
        for(int j = 0; j<M;j++){
            scanf("%d",&Array[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("a[%d][%d] = %d \n",i,j,Array[i][j]);
        }
        // printf("\n");
    }
}