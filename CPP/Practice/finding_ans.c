#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    double pi = acos(-1);

    printf("%.6lf\n", pow((n + pi), (1 / 2.0)));
}