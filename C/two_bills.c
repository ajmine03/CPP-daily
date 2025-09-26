#include <stdio.h>
int main()
{
    int A, B, C;

    while (scanf("%d %d", &A, &B) == 2)
    {
        if (A == 0 && B == 0)
        {
            break;
        }
        else
        {
            C = B - A;
            if (C % 2 == 0 || C % 5 == 0 || C % 10 == 0 || C % 15 == 0 || C % 20 == 0 || C % 50 == 0 || C % 100 == 0)
            {
                printf("possible\n");
            }
            else
            {
                printf("impossible\n");
            }
        }
    }
    return 0;
}