#include <stdio.h>

int main()
{
    // int A;
    while (1)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);
        if (X == Y)
        {
            break;
        }
        if (X > Y)
        {
            printf("Decrescente\n");
        }
        else
        {
            printf("Crescente\n");
        }
    }

    return 0;
}