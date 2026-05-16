//  Square Calculation Function Variants

// Write a program in C to find the square of any number using the function.

// Test Data :

// Input any number for square : 20

// Expected Output :

// The square of 20 is : 400.00

#include <stdio.h>

float fun(float a)
{

    return a * a;
}
int main()
{

    float x;
    scanf("%f", &x);
    float s = fun(x);
    printf("%f\n", s);
    return 0;
}