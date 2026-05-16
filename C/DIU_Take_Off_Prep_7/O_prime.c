#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int sum = 0;
    int B = 0;
    int i = 0;
    int ar[X];
    int ar_2[X];

    if (X % 2 == 0)
    {
        while (1)
        {
            if (B == X)
            {
                break;
            }
            B = B + 2;
            ar[i] = 2;
            i++;
            sum++;
        }
    }
    int C = 3;
    ar_2[0] = 3;
    int k = 1;
    if (X % 2 != 0)
    {

        while (1)
        {
            if (C == X)
            {
                break;
            }
            C = C + 2;
            ar_2[k] = 2;
            k++;
            sum++;
        }
    }
    if (X % 2 == 0)
    {
        printf("%d\n", sum);
        for (int j = 0; j < i - 1; j++)
        {
            printf("%d ", ar[j]);
        }
        printf("%d\n", ar[i - 1]);
    }
    if (X % 2 != 0)
    {
        printf("%d\n", sum+1);
        for (int j = 0; j < k - 1; j++)
        {
            printf("%d ", ar_2[j]);
        }
        printf("%d\n", ar_2[k - 1]);
    }
    // printf("%d", i);
}