// Swap Numbers Function Variants

//     Write a program in C to swap two numbers using a function.

//     Test Data :

//     Input 1st number : 2 Input 2nd number : 4

//     Expected Output :

//     Before swapping : n1 = 2,
//                       n2 = 4 After swapping : n1 = 4, n2 = 2

#include <stdio.h>

int swap(int *a, int *b)
{
    int tem = *a;
    *a = *b;
    *b = tem;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("%d %d", x, y);
    return 0;
}