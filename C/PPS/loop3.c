// 11. Write a program to calculate the sum of the digits in a given number.
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    int rem ;
    scanf("%d", &n);
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        rem = n % 10;
        n = n/10;
        sum =sum + rem;
    }
    printf("%d", sum);
}