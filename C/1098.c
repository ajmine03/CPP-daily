#include <stdio.h>

int main()
{
    float I = 0.0, J = 1.0;
    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("I=%.0f ", I);
            printf("J=%.0f\n", J);
            J++;
        }
        for (int i = 0; i < 3; i++)
        {
            J--;
        }

        I = I + 0.2;
        J = J + 0.2;

        for (int i = 0; i < 3; i++)
        {
            printf("I=%.1f ", I);
            printf("J=%.1f\n", J);
            J++;
        }
        for (int i = 0; i < 3; i++)
        {
            J--;
        }

        I = I - 0.2 + 1;
        J = J - 0.2 + 1;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("I=%.0f ", I);
        printf("J=%.0f\n", J);
        J++;
    }

    return 0;
}
