#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &array[i]);

    for (int i = 1; i < N; i++)
    {
        if (array[i] < array[i - 1])
        {
            printf("%d\n", i + 1);
            return 0;
        }
    }
    printf("0\n");
}