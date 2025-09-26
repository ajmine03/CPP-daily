#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);

    int n, m, Rb, Cb, Rd, Cd;

    for (int i = 0; i < A; i++)
    {
        int t = 0;
        scanf("%d %d %d %d %d %d", &n, &m, &Rb, &Cb, &Rd, &Cd);
        if (1 <= n && n <= 100 && 1 <= m && m <= 100 && 1 <= Rb && Rb <= n && 1 <= Rd && Rd <= n && 1 <= Cb && Cb <= m && 1 <= Cd && Cd <= m)
        {

            // while (1)
            // {
            int Dc, Dr;
            while (Rb < n && Cb < m)
            {
                Rb += Dr;
                Cb += Dc;

                if (Rb == n)
                    Rb = -Dr;
                if (Cb == m)
                    Cb = -Dc;

                if (Rb == Rd || Cb == Cd)
                {
                    break;
                }
                t++;
            }
        }
        printf("%d\n", t);
    }

    return 0;
}