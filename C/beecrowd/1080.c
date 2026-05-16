#include <stdio.h>

int main()
{

    int B[100];

    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &B[i]);
    }
    int Higest = B[0];
    int Position;
    for (int i = 0; i < 100; i++)
    {
        if (Higest < B[i])
        {
            Higest = B[i];
            Position = i + 1;
        }
    }
    printf("%d\n", Higest);
    printf("%d\n", Position);

    return 0;
}