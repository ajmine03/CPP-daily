#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);

        float sum = a * 2 + b * 3 + c * 5;
        printf("%.1f\n", sum / 10);
    }

    return 0;
}