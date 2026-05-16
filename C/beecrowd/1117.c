#include <stdio.h>

int main()
{
    float A;
    float sum = 0.0;
    int count = 0;
    while (1)
    {
        scanf("%f", &A);

        if (A >= 0.0 && A <= 10.0)
        {
            sum += A;
            count++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if (count == 2)
        {
            float Avg = sum / 2.0;
            printf("media = %.2f\n", Avg);
            break;
        }
    }

    return 0;
}