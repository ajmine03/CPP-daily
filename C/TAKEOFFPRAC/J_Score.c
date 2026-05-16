#include <stdio.h>
int main()
{
    int T, P;
    scanf("%d %d", &T, &P);
    if (T >= 24 && P >= 16)
    {
        if ((T + P) >= 70)
        {
            printf("Perfect Score\n");
        }
        else
        {
            printf("Passed\n");
        }
    }
    else
    {
        printf("Failed\n");
    }
}