#include <stdio.h>
int main()
{
    int n;
    long long fac = 0;
    scanf("%d", &n);
    if (n >= 1 && n <= 15)
    {
        while (n--)
        {
            int m;
            scanf("%d", &m);
            if (m >= 0 && m <= 20)
            {
                if (m == 0 || m == 1)
                {
                    fac = 1;
                }
                else
                {
                    fac = 1;
                    for (int i = 1; i <= m; i++)
                    {

                        fac = fac * i;
                    }
                }
                printf("%lld\n", fac);
            }
        }
    }
}