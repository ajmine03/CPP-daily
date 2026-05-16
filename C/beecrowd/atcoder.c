#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, count = 0, fibo = 0;
    scanf("%d", &n);
    if (n >= 1)
        printf("%d\n", first);
    if (n >= 2)
        printf("%d\n", second);
    for (int i = 3; i <= n; i++)
    {
        fibo = first + second;
        printf("%d\n", fibo);
        first = second;
        second = fibo;
    }
    return 0;
}
