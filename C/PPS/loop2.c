
// 10. Write a program to calculate the sum of the first and the
//  last digits in a given number.
#include <stdio.h>
int main()
{
    int n;
    int first_digit;
    int last_digit;
    scanf("%d", &n);
    if (n < 0)
        n = -n;

    last_digit = n % 10;
    while (n > 10)
    {
        n = n / 10;
    }
    first_digit = n;

    printf("1st and last digits are : %d and %d \n", first_digit, last_digit);
    printf("The sum of last and first digit is %d\n", first_digit + last_digit);
}