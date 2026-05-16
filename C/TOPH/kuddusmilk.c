#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N <= 10)
    {
        printf("Infected\n");
    }
    else if (N > 10 && N < 20)
    {
        printf("Need Checkup\n");
    }
    else if (N >= 20)
    {
        printf("Healthy\n");
            
    }
}