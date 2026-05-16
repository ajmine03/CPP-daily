// 9. Write a program to count the number of digits in a given number.
#include <stdio.h>
int main()
{
    int n;
    int rem = 0;
    int i = 0;
    scanf("%d", &n);
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        n = n / 10;
        // rem = n % 10;
        i++;
    }
    printf("%d\n", i);
}