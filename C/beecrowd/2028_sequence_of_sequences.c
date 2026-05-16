#include <stdio.h>
int main()
{
    int A;
    while (scanf("%d", &A) == 1)
    {
        int count = 0;
        for (int i = 0; i < A; i++)
        {
            for (int j = 0; j < A; j++)
            {

                printf("%d", i);
                do
                {
                    break;
                } while (i == A);
            }
        }

        // printf("%d ",count);
    }
    return 0;
}