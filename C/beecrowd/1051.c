#include <stdio.h>
int main()
{
    float A;
    scanf("%f", &A);
    if (A >= 0.00 && A <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (A > 2000.00 && A <= 3000.00)
    {
        A = A - 2000.00;
        double Z = A * 8 / 100.00;
        printf("R$ %.2lf\n", Z);
    }
    else if (A > 3000.00 && A <= 4500.00)
    {
        A = A - 2000.00;
        double Z_1 = 1000.00 * 8 / 100.00;
        A = A - 1000.00;
        double Z_2 = A * 18 / 100.00;
        printf("R$ %.2lf\n", Z_1 + Z_2);
    }
    else if (A > 4500.00)
    {
        A = A - 2000.00;
        double Z_1 = 1000.00 * 8 / 100.00;
        A = A - 1000.00;
        double Z_2 = 1500.00 * 18 / 100.00;
        A = A - 1500, 00;
        double Z_3 = A * 28.00 / 100.00;
        printf("R$ %.2lf\n", Z_1 + Z_2 + Z_3);
    }
    return 0;
}