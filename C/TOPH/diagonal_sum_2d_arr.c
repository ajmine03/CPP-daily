#include <stdio.h>

int main()
{
    int arr_2d[4][3] = {
        {5, 6, 7},
        {8, 9, 10},
        {11, 12, 14},
        {14, 15, 16}};

    int sum = 0;

    
    for (int i = 0; i < 3; i++)
    {
        sum += arr_2d[i][i];
    }

    printf("Diagonal sum = %d\n", sum);

    return 0;
}
