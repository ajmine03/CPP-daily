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
    // int J = 0;

    for (int i = 0; i < M; i++)
    {
        if (Array[i] > MaxValue)
        {
            MaxValue = Array[i];
            // J++;
        }
    }

    printf("Max Value = %d\n", MaxValue);
}