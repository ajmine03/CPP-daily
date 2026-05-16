#include <stdio.h>
int main()
{
    int A, B, C;
    int avg = 0;
    int X;
    scanf("%d", &X);
    while (X--)
    {
        scanf("%d %d %d", &A, &B, &C);
        avg = (A + B + C) / 3;
        if ((A <= avg) && (B > avg || B <=avg) && (C <= avg))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
