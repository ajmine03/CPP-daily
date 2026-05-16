#include <stdio.h>
#include <math.h>
int main()
{
    float A;
    scanf("%f", &A);
    if (A > 1)
    {
        printf("NOTAS:\n");
        if (A >= 100)
        {
            printf("%.f nota(s) de R$ 100.00\n", trunc(A / 100));
            A = fmod(A, 100);
        }
        else
        {
            printf("0 nota(s) de R$ 100.00\n");
        }
        if (A >= 50)
        {
            printf("%.f nota(s) de R$ 50.00\n", trunc(A / 50));
            A = fmod(A, 50);
        }
        else
        {
            printf("0 nota(s) de R$ 100.00\n");
        }
        if (A >= 20)
        {
            printf("%.f nota(s) de R$ 20.00\n", trunc(A / 20));
            A = fmod(A, 20);
        }
        else
        {
            printf("0 nota(s) de R$ 20.00\n");
        }
        if (A >= 100)
        {
            printf("%.f nota(s) de R$ 10.00\n", trunc(A / 10));
            A = fmod(A, 10);
        }
        else
        {
            printf("0 nota(s) de R$ 10.00\n");
        }
        if (A >= 5)
        {
            printf("%.f nota(s) de R$ 5.00\n", trunc(A / 5));
            A = fmod(A, 5);
        }
        else
        {
            printf("0 nota(s) de R$ 5.00\n");
        }
        if (A >= 2)
        {
            printf("%.f nota(s) de R$ 2.00\n", trunc(A / 2));
            A = fmod(A, 2);
        }
        else
        {
            printf("0 nota(s) de R$ 2.00\n");
        }
    }
    if (A == 1)
    {
        printf("MOEDAS:\n");
        printf("%.f nota(s) de R$ 1.00\n", A);
    }
    else
    {
        printf("MOEDAS:\n");
        printf("0 nota(s) de R$ 1.00\n");
    }
    A = fmod(A, 1.0);
    if (A < 1.0)
    {
        if (A >= 0.5)
        {
            printf("%.f nota(s) de R$ 0.50\n", trunc(A / .5));
            A = fmod(A, 0.5);
        }
        else
        {
            printf("0 nota(s) de R$ 0.50\n");
        }
        if (A >= .25)
        {
            printf("%.f nota(s) de R$ 0.25\n", trunc(A / .25));
            A = fmod(A, .25);
        }
        else
        {
            printf("0 nota(s) de R$ 0.25\n");
        }
        if (A >= 0.10)
        {
            printf("%.f nota(s) de R$ 0.10\n", trunc(A / 0.10));
            A = fmod(A, .10);
        }
        else
        {
            printf("0 nota(s) de R$ 0.10\n");
        }
        if (A >= 0.05)
        {
            printf("%.f nota(s) de R$ 0.05\n", trunc(A / 0.05));
            A = fmod(A, 0.05);
        }
        else
        {
            printf("0 nota(s) de R$ 0.05\n");
        }
        if (A >= 0.01)
        {
            printf("%.f nota(s) de R$ 0.01\n", trunc(A / 0.01));
            A = fmod(A, 0.01);
        }
        else
        {
            printf("0 nota(s) de R$ 0.01\n");
        }
    }
    return 0;
}