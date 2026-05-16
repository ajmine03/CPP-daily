#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    for(int i = 0; i<X ; i++)
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
        printf("Case 1%d\n", clc);
    }
}