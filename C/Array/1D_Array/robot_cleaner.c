#include <stdio.h>

int main()
{
    int A;
    scanf("%d", &A);
    while (A--)
    {
        int n, m, Rb, Cb, Rd, Cd;
        scanf("%d %d %d %d %d %d", &n, &m, &Rb, &Cb, &Rd, &Cd);

        int Dc = 1, Dr = 1, t = 0;

        while (1)
        {
            if (Rb == Rd || Cb == Cd)
            {
                break;
            }
            Rb += Dr;
            Cb += Dc;

            if (Rb == n || Rb == 1)
                Dr = -Dr;
            if (Cb == n || Cb == 1)
                Dc = -Dc;

            t++;
        }
        printf("%d\n", t);
    }
    return 0;
}