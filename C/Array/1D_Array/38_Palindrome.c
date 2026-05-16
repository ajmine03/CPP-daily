#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int j = n - 1; // ok

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == ar[j])
        {
            j--; // ok
        }
    }
    if (j == -1)
    {
        printf("YES\n"); // ok
    }
    else
    {
        printf("NO\n");
    }
}