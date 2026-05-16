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
    int MaxValue = Array[0];
    int j = 0;
    for (int i = 0; i < M; i++)
    {
        if (Array[i] > MaxValue)
        {
            MaxValue = Array[i];
        }
    }
    int Second_max = Array[0];
    for (int i = 0; i < M; i++)
    {
        if (Array[i] > Second_max && Array[i] != MaxValue)
        {
            Second_max = Array[i];
        }
    }

    printf("2nd MaxValue = %d\n", Second_max);
}