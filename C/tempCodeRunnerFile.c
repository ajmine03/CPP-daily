#include <stdio.h>
#include<math.h>
int main()
{
    int N;
    int Count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        float A;

        scanf("%f", &A);
        if (fabs(fmod(A,2.0)) < 1e-6)
        {
            Count++;
        }
        printf("%d\n", Count);
    }
}