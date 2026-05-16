#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);

    while (1)
    {

        if (n % 2 != 0)
        {
            n = -1;
            break;
        }
        if (n == 2 ||n<1)
        {
            break;
        }
        n = n / 2;
    }
    if (n == 2)
    {
        printf("Ferocious Angry Fighter\n");
    }
    else
    {
        printf("HailaYehKyaHua\n");
    }
    // printf("%d\n", n);
}