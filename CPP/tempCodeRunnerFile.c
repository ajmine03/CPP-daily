#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int ac[n];
    ac[0] = -1;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &ar[i]);
        int count = 0;

        for (int j = i; j <= 0; j--)
        {
            if (ar[j] >= ar[i])
            {
                count++;
            }
            ac[i] = count;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}
