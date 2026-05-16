#include <stdio.h>
int main()
{
    // while (1)
    // {
    int n;
    int j = 0;
    scanf("%d", &n);
    int array[n];

    // if (n == 0)
    // break;
    int hig = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (array[i] < array[i - 1])
        {
            array[j] = array[i + 1];
            j++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", array[j]);
    }
}