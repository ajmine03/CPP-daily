#include<stdio.h>
int main(){
    int Array[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0; j<3;j++){
            scanf("%d",&Array[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", Array[i][j]);
        }
        printf("\n");
    }
}