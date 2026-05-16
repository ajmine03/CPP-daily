#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            for (int i = b + 1; i < a; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }
        if (b > a)
        {
            for (int i = a + 1; i < b; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
        }

        printf("%d\n", sum);
    }
    return 0;
}