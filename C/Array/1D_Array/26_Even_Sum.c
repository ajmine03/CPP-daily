#include <stdio.h>
int main()
{
    int M;
    scanf("%d", &M);
    int Array[M];
    int sum = 0;

    for (int i = 0; i < M; i++)
    {
        scanf("%d", &Array[i]);
    }

    for (int i = 0; i < M; i++)
    {
        if (Array[i]%2==0){
            sum+=Array[i];
        }
    }

    printf("Sum of Even Array Sum = %d\n",sum);
}