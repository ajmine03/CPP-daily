#include <stdio.h>
#include <algorithm>
int main()
{
    int ar[10] = {21, 2, 3, 4, 5, 6, 1, 41, 0};
    sort(ar, ar + 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ar[i]);
    }
}