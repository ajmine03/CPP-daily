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
    int Array_Odd[M];
    int Array_Even[M];
    int o = 0;
    int e = 0;

    for (int i = 0; i < M; i++)
    {
        if (Array[i] % 2 == 0)
        {
            Array_Even[e] = Array[i];
            e++;
        }
        else
        {
            Array_Odd[o] = Array[i];
            o++;
        }
    }
    printf("ODD = ");

    for (int i = 0; i < o; i++)
    {
        printf(" %d", Array_Odd[i]);
    }
    printf("\n");
    printf("Even = ");

    for (int i = 0; i < e; i++)
    {
        printf(" %d", Array_Even[i]);
    }
}