#include <stdio.h>

int main()
{
    // int arr[3] = {4, 5, 6};
    // int row = 0,j=0;
    int arr_2d[4][3] = {
        {5, 6, 7},
        {8, 9, 10},
        {11, 12, 14},
        {14, 15, 16}};

    for (int i = 0; i < 4; i++)
     { //  row = (row + arr_2d[i][j]);
        int row  = 0 ;
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr_2d[i][j]);
            row = row + arr_2d[i][j];
        }
        printf("row = %d \n", row);
        printf("\n");
    }
    int col = 0;
    for (int j = 0; j < 3; j++)
    { //  row = (row + arr_2d[i][j]);
        int row = 0;
        for (int i = 0; i < 4; i++)
        {
            
            col = col + arr_2d[i][j];
        }
        
        printf(" %d ", col);
    }

    return 0;
}
