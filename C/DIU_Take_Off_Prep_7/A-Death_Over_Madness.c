#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n < 7 && n >= 1)
    {
        printf("Uganda Wins!\n");
    }
    else if (n == 7)
    {
        printf("Super Over Decides!\n");
    }
    else
    {
        printf("Papua New Guinea Wins!\n");
    }
}