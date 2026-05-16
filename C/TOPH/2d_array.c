#include <stdio.h>

int main()
{
    // int arr[3] = {4, 5, 6};
    int row = 0;
    int col = 0;
    int arr_2d[3][4] = {
        {7,2,8,5},
        {5,7,9,15},
        {9,10,20,30}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        
        {   
            printf("%d ", arr_2d[i][j]);
        }
        printf("\n");
    }

    // printf("row avg = %d \n", row / 3);
    // printf("col avg = %d \n", col / 4);

    return 0;
}
