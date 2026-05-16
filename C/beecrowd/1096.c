#include <stdio.h>

int main()
{
    int I = 1;

    for (int i = 0; i < 5; i++)
    {
        int J = 7;
        for (int i = 0; i < 3; i++)
        {
            printf("I=%d ", I);
            printf("J =%d\n", J);
            J--;
        }
        I = I + 2;
    }

    return 0;
}