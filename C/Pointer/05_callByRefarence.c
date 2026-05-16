// Add Numbers Using Call by Reference
#include <stdio.h>

int sum(int *a, int *b)
{

    int result = *a + *b;
    printf("%d\n", result);
}
int main()
{

    int x, y;
    scanf("%d %d", &x, &y);
    sum(&x, &y);
}