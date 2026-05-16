#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int ac[n + 1];
    ac[0] = -1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        ac[i] = ar[i];
        int count = 0;
        int j = i;

        while (j--)
        {
           printf("%d\n",ac[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ac[i]);
    }
}
