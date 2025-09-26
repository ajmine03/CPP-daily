#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);
    int x = 2;
    while (N)
    {
        int z = pow(x, 2);
        printf("%d^2 = %d\n", x, z);
        x = pow(x, 2);
        if (z == N)
        {
            break;
        }
    }

    return 0;
}