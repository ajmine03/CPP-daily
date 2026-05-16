#include <stdio.h>
int main()
{
    int N, X;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &X);
    int j = 0;
    for (int i = 0; i < N; i++)
    {
        if (X == arr[i])
            break;

        j++;
    }

    if (j < N)
    {
        printf("%d", j);
    }
    else
    {
        printf("%d", -1);
    }
}