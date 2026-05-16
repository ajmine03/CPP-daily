#include <stdio.h>

int main()
{
    while (1)
    {
        int A, B;
        scanf("%d %d", &A, &B);
        if (A == 0 || B == 0)
        {
            break;
        }
        else
        {
            if (A > 0 && B > 0)
            {
                printf("primeiro\n");
            }
            else if (A > 0 && B < 0)
            {
                printf("quarto\n");
            }
            else if (A < 0 && B < 0)
            {
                printf("terceiro\n");
            }
            else if (A < 0 && B > 0)
            {
                printf("segundo\n");
            }
        }
    }

    return 0;
}