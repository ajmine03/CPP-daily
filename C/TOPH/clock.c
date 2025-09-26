#include <stdio.h>
#include <stdlib.h> //  absulate value niyar jnne
#include <math.h>
int main()
{
    int H, M;
    scanf("%d %d", &H, &M);    // hour and min defined
    double h = 30 * H + .5 * M; // per hour e koto angle
    double m = 6 * M;           // per minute a koto angle
    double diff = fabs(h - m);

    double diff_2 = 360 - diff;
    if (diff > diff_2)
    {
        printf("%.7f\n", diff_2);
    }
    else if (diff_2 > diff)
    {
        printf("%.7f\n", diff);
    }
    else 
    {
        printf("%.7f\n",fabs(diff));
    }
    return 0;
}