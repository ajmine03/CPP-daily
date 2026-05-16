#include <stdio.h>

int main()
{
    float I = 0;
    float J = 1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("I=%.f ", I);
            printf("J=%.f\n", J);
            J++;
        }
        for (int l = 0; l < 3; l++)
        {
            J--;
        }
        I = I + .2;
        J = J + .2;
        for (int m = 0; m < 4; m++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("I=%.1f ", I);
                printf("J=%.1f\n", J);
                J++;
            }
            for (int n = 0; n < 3; n++)
            {
                J--;
            }

            I = I + .2;
            J = J + .2;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("I=%.f ", I);
        printf("J=%.f\n", J);
        J++;
    }

    return 0;
}