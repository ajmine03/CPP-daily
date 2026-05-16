#include <stdio.h>
int main()
{
    int M;
    scanf("%d", &M);
    int Array[M];

    for (int i = 0; i < M; i++)
    {
        scanf("%d", &Array[i]);
    }
    printf("input X = ");
    int X;
    scanf("%d", &X);
    int j = -1;
    for (int i = 0; i < M; i++)
    {
        if (Array[i] == X)
        {
            j=i;
        }
    }
    if(j!=-1){
        printf("Index at %d", j);
    }
    else{
        printf("Not Found\n");
    }
}