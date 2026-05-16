#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == b && a * b == 1)
        {
            count++;
        }
        else if (b == c && c * b == 1)
        {
            count++;
        }
        else if (c == a && a * c == 1)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}