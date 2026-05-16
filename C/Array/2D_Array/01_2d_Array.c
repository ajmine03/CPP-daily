#include <stdio.h>
int main()
{
    int Array_2d[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", Array_2d[i][j]);
        }
        printf("\n");
    }
}