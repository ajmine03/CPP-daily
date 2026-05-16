// Maximum of Two Using Pointer
#include <stdio.h>
int max(int *a, int *b)
{
    if (*a > *b)
    {
        // return *a;
        printf("Max is %d", *a);
    }
    else if (*b > *a)
    {
        // return *b;
        printf("Max is %d", *b);
    }
}
int main()
{

    int x, y;
    scanf("%d %d", &x, &y);
    max(&x, &y);

    // printf("")
}