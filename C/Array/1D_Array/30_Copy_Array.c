#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int Array[N];
    int M = N;
    int Array_copy[M];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Array[i]);
    }
    for (int i = 0; i < M; i++)
    {
        Array_copy[i] = Array[i];
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", Array_copy[i]);
    }
}