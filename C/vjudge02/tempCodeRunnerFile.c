#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int clc = 0;
    if (M > N)
    {
        clc = 3 + (M - N) * 4 + 3 + 5 + N * 4 + 3 + 5;
    }
    else if (M == N)
    {
        clc = 3 + 5 + N * 4 + 3 + 5 + 3;
    }
    printf("%d\n", clc);
}