#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int tem;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] < ar[j])
            {
                tem = ar[j];
                ar[j] = ar[i];
                ar[i] = tem;
            }
        }
    }
    int count = -1;
    for (int i = 1; i < n; i++)
    {
        if (ar[0] != ar[i])
        {
            count = ar[i];
            break;
        }
    }
    printf("%d\n", count);
}