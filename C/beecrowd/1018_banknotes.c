#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    printf("%d\n", A);
    if (A / 100 > 0)
    {
        printf("%d nota(s) de R$ 100,00\n", A / 100);
        A = A % 100;
    }
    else
    {
        printf("0 nota(s) de R$ 100,00\n");
    }

    if (A / 50 > 0)
    {
        printf("%d nota(s) de R$ 50,00\n", A / 50);
        A = A % 50;
    }
    else
    {
        printf("0 nota(s) de R$ 50,00\n");
    }

    if (A / 20 > 0)
    {
        printf("%d nota(s) de R$ 20,00\n", A / 20);
    }
    else
    {
        printf("0 nota(s) de R$ 20,00\n");
    }

    A = A % 20;
    if (A / 10 > 0)
    {
        printf("%d nota(s) de R$ 10,00\n", A / 10);
        A = A % 10;
    }
    else
    {
        printf("0 nota(s) de R$ 10,00\n");
    }

    if (A / 5 > 0)
    {
        printf("%d nota(s) de R$ 5,00\n", A / 5);
        A = A % 5;
    }
    else
    {
        printf("0 nota(s) de R$ 5,00\n");
    }

    if (A / 2 > 0)
    {
        printf("%d nota(s) de R$ 2,00\n", A / 2);
        A = A % 2;
    }
    else
    {
        printf("0 nota(s) de R$ 2,00\n");
    }

    if (A / 1 > 0)
    {
        printf("%d nota(s) de R$ 1,00\n", A / 1);
        A = A % 1;
    }
    else
    {
        printf("0 nota(s) de R$ 1,00\n");
    }

    return 0;
}