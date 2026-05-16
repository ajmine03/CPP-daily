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
    // int Highest = Array[0];
    int temp = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (Array[j] < Array[i])
            {
                temp = Array[j];
                Array[j] = Array[i];
                Array[i] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", Array[i]);
    }
}