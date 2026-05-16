#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    while (N--)
    {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);

        int Seat = 10 * X;

        int p;
        if (Y < Seat)
        {
            p = Y;
        }
        else
        {
            p = Seat;
        }

        int income = p * Z;

        printf("%d\n", income);
    }

    return 0;
}
