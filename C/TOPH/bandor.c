#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N >= 5 && N < 15)
    {
        printf("%d\n", 1);
    }
    else if (N >= 15 && N < 30)
    {
        printf("%d\n", 2);
    }
    else if (N >= 30)
    {
        printf("%d\n", 3);
    }
    else
    {
        printf("%d\n", 0);
    }
}