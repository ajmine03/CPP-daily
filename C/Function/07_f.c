#include <stdio.h>
int greeting()
{
    printf("Goood MOring \n");
    int n = 5;
    int result = n * n;
    printf("Square pf %d is : %d\n", n, result);
}

void naturalSum(int a, int b)
{
    int result = a * a + b * b;
    printf("Sum of squares of %d and %d is : %d\n", a, b, result);
}
int main()
{
    greeting();
    naturalSum(3, 4);
    return 0;
}