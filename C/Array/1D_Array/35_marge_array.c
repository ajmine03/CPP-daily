#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int Array[N];
    

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Array[i]);
        
    }
    int M;
    scanf("%d", &M);
    int Array_M[M];
    int new = M+N;

    for (int i = N; i < new; i++)
    {
        scanf("%d", &Array[i]);
    }
    for (int i = 0; i < new; i++)
    {
        printf("%d ",Array[i]);
    }
}