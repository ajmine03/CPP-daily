#include <stdio.h>
int main()
{
    int P, I, E, T;
    int tk = 0;
    scanf("%d %d %d %d", &P, &I, &E, &T);
    if (I >= T)
    {
        tk = P;
        // tested ok
        // printf("ss %d\n", tk);
    }
    else
    {
        T = T - I;
        tk = P;
        while (1)
        {
            T = T - 30;
            tk = tk + E;
            // printf("       %d\n",tk);
            if (T <= 0)
            {
                break;
            }
        }
    }
    printf("%d\n", tk);
}