#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    int count[m];
    for (int i = 0; i < m; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] >= 1 && arr[i] <= m)
        {
            count[arr[i] - 1]++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}