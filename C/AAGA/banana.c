#include <stdio.h>

int main()
{
    int k, n, w;

    scanf("%d %d %d", &k, &n, &w);

    int total_cost = k * w * (w + 1) / 2;
    int borrow;

    
    if (total_cost > n)
    {
        borrow = total_cost - n;
    }
    else
    {
        borrow = 0;
    }

    printf("%d\n", borrow);

    return 0;
}
