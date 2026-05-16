#include <stdio.h>
#include <math.h>
int main()
{
    int N, X, M, Y;
    scanf("%d %d %d %d", &N, &X, &M, &Y);

    float fc = Y / (M * (1.0));
    float gg = X * 1.0;
    float bg,bc;

    if (fc > gg)
    {

        bg = (N / gg);

    }
    else
    {

        bc = (N / fc);
    }

    printf("%f",bg);

    
}
