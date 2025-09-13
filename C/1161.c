#include <stdio.h>
int main()
{
    int A, B;
    while (scanf("%d %d", &A, &B) == 2)
    {
        int a = 1;
        long sum_1 = 1, sum_2 = 1;
        for (int i = A; i > 0; i--)
        {
            sum_1 *= i;
        }
        for (int i = B; i >= 1; i--)
        {
            sum_2 *= i;
        }
        printf("%ld\n", sum_1 + sum_2);
    }
    return 0;
}