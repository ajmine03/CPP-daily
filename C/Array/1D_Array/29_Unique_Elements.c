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
    int Dublicate[N];
    int flag = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {

            if (Array[i] == Array[j])
            {
                Dublicate[flag] = Array[j];
                Array[i] = i * j * -1;
                Array[j] = i * j * -1;

                flag = 1 + flag;
            }
        }
    }
    // int Unique_N = N - flag ;
    printf("Unique Array : ");
    for (int i = 0; i < N; i++)
    {
        if (Array[i] > 0)
        {
            printf("%d ", Array[i]);
        }
    }
}