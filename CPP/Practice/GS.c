#include <stdio.h>
#include <math.h>
int main()
{
    int ar[8];
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] >= 60)
        {
            count++;
        }
        }
    if (count >= 8)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}