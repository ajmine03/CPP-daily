#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    int rema[n + 5];
    int rema_c[n + 5];

    int i = 1;
    int rem = 0;
    for (int j = 0; j <= 9; j++)
    {
        rema_c[j] = 0;
    }
    rema[0] = n % 10;
    while (n > 0)

    {
        n = n / 10;
        rem = n % 10;
        rema[i] = rem;
        i++;
    }
    // printf("%d\n", i);
    // int j = i ;
    // printf("%d\n", rema[0]);
    // printf("\n");

    // // printf("%d\n", rema[i - 1]);

    // printf("\n");

    for (int j = 0; j <= 9; j++)
    {
        for (int k = j + 1; k <= 9; k++)
        {
            if (rema[j] == rema[k])
            {
                rema_c[j]++;
            }
        }
    }
    int tem = 0;
    for (int j = 0; j <= 9; j++)
    {
        for (int k = j + 1; k <= 9; k++)
        {
            if (rema[j] > rema[k])
            {
                tem = rema[j];
            }
        }
    }
    printf("%d\n", tem-1);

    return 0;
}