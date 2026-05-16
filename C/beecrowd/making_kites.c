#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    for (int i = 0; i < A; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a >= 10 && a <= 100 && b >= 10 && b <= 100)
        {
            printf("%d cm2\n", (a * b / 2));
        }
    }
    return 0;
}