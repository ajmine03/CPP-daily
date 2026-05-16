// Write a program to check whether a given number is a palindrome or not.
#include <stdio.h>
int main()
{
    int n;
    int rev = 0;
    int n_copy;
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    n_copy = n;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }

    if (n_copy == rev)
    {
        printf("Palindrome\n");
    }
}