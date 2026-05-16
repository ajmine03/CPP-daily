#include <stdio.h>
#include <math.h>

int main()
{
    int Xe, Ye, R;
    int Xm, Ym, T;
    scanf("%d %d %d %d %d %d", &Xe, &Ye, &R, &Xm, &Ym, &T);
    double d1 = ((Xm - Xe) * (Xm - Xe)) + ((Ym - Ye) * (Ym - Ye));
    double D = pow(d1, (1 / 2.0));
    if (D > R)
    {
        printf("%d\n", 0);
    }
    else
    {
        D = D - R;
        if (D >= 0)
        {
            printf("%.6lf\n", D * T);
        }
        else
        {
            D = -1.0 * D;
            printf("%.6lf\n", D * T);
        }
    }
}