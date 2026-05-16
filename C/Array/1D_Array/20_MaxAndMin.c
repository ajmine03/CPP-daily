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
    int MinValue = Array[0];
    int MaxValue = Array[0];
    // int J = 0;

    for (int i = 0; i < M; i++)
    {
        if (Array[i] < MinValue)
        {
            MinValue = Array[i];
            // J++;
        }
    }
    for (int i = 0; i < M; i++)
    {
        if (Array[i] > MaxValue)
        {
            MaxValue = Array[i];
            // J++;
        }
    }

    printf("Min Value = %d\n", MinValue);
    printf("MaxValue = %d\n",MaxValue);
}