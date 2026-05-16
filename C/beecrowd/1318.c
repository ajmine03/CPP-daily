#include <stdio.h>

int main()
{
    while (1)
    {
        int N, M;
        scanf("%d %d", &N, &M);
        if (M == 0 && N == 0) // M fake , N Real
        {
            break;
        }

        int total_ticket[20005] = {0};
        // for (int i = 1; i <= N; i++)
        // {
        //     total_ticket[i] = 0;
        // }
        for (int i = 1; i <= M; i++)
        {
            int x;
            scanf("%d", &x);
            total_ticket[x]++;
        }
        int count = 0;
        for (int i = 1; i <= N; i++)
        {
            if (total_ticket[i] > 1)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}