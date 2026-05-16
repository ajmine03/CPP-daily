#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int col = 0; col < 3; col++)
    {
        int sum = 0;

        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }

        float avg = sum / 3.0; 
        printf("Column %d avg = %.2f\n", col + 1, avg);
    }

    return 0;
}
