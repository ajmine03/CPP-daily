#include <stdio.h>
int prime()

int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
        int x = ar[i];
        int flag = 0;
        for (int i = 1; i <= x; i++)
        {
            if (x == 0)
            {
                count++;
            }
            else if (x == 1)
            {
                count++;
            }
            else if (x % i == 0 && x != 0)
            {
                flag++;
            }
            if (flag > 2)
            {
                count++;
                break;
            }
        }
    }
    printf("%d\n", N - count);
}