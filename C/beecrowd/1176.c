#include <stdio.h>

int main()
{
    long long int arr[60];
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)

    {
        int n;
        scanf("%d", &n);

        arr[0] = 0;
        arr[1] = 1;

        for (int i = 2; i <= n; i++)
        {

            arr[i] = arr[i - 1] + arr[i - 2];
        }
        printf("Fib(%d) = %lld\n", n, arr[n]);
    }

    return 0;
}