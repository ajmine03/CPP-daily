#include <stdio.h>
int main()
{
    int n;
    int step = 0;
    int rem = 0;
    scanf("%d", &n);
    if (n >= 5)
    {
        step = n / 5;
        rem = n % 5;
    }
    if (rem != 0 || n<5)
    {
        step = step + 1;
    }

    printf("%d\n", step);
}