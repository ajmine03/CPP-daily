#include <stdio.h>
int main()
{
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    if (Y * Z == X)
    {
        printf("Yes\n");
    }
    else
    {
        printf("NO\n");
    }
}