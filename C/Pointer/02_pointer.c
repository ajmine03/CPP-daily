#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 3, y = 9;
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}
