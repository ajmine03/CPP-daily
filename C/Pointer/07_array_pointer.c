// Print Array Using Pointer
#include <stdio.h>
int main()
{
    int ar[5];
    int *ptr;
    int i = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]);
    }
    ptr = ar;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
}