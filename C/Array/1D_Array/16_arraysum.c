#include <stdio.h>
int main()
{
    int N, A;
    scanf("%d", &N);
    int arry[N];
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arry[i]);
        sum = sum + arry[i];
    }

    printf("%d\n", sum);
}