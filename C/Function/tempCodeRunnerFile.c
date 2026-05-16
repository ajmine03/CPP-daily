//  Square Calculation Function Variants

// Write a program in C to find the square of any number using the function.

// Test Data :

// Input any number for square : 20

// Expected Output :

// The square of 20 is : 400.00

#include <stdio.h>

int fun(int a)
{

    return a * a;
}
int main()
{

    int x;
    scanf("%d", &x);
    int s = fun(x);
    printf("%d\n", s);
    return 0;
}