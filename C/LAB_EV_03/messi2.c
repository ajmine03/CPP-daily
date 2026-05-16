#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n)
{
    if (n < 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
        if (isPrime(ar[i]) == 1)
        {
            count++;
            // printf("%d\n", ar[i]);
        }
    }
    printf("%d\n", count);
}
