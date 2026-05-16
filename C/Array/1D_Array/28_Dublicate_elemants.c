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
                flag = 1 + flag;
            }
        }
    }
    printf("Dublicate(s) =");
    for (int i = 0; i < flag; i++)
    {
        printf(" %d", Dublicate[i]);
    }
}