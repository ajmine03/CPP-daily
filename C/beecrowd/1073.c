#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0 && N > 5 && N < 2000)
        {
            printf("%d^2 = %.lf\n", i, pow(i, 2.0));
        }
    }

    return 0;
}c