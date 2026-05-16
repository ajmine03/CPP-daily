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
    int flag = 0;
    for (int i = 0; i < N; i++)
    {
        if (Array[i] % 2 == 0)
        {
            flag = flag + 1;
        }
    }
    printf("NO of Even = %d\n",flag);
}