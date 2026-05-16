#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int max = 10000;
    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (max > ar[i])
        {
            max = ar[i];
            pos = i + 1;
        }
    }
    printf("%d %d\n", max, pos);
}