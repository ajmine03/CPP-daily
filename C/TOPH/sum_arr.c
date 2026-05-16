#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int sum = 0,sum1 = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            // if (j == i)
            // {
            //     sum += arr[i][j];
            // }
        }
    }

    printf("%d\n", sum);
    // printf("%d\n", sum1);

    return 0;
}
