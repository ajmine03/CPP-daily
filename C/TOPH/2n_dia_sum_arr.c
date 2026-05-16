#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int sum = 0;
    int j = 2; 

    for (int i = 0; i < 3; i++)
    {
        sum += arr[i][j];
        // printf("%d ",arr[i][j]);
        j--; 
    }

    printf("%d\n", sum);

    return 0;
}
