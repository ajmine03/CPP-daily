// Add Two Numbers with Pointers
#include <stdio.h>
int main()
{
    int x, y, *ptr1, *ptr2;
    scanf("%d %d", &x, &y);
    ptr1 = &x;
    ptr2 = &y;

    int sum = *ptr1 + *ptr2;

    printf("%d\n", sum);
}