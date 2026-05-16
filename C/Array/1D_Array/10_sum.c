#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        // if(arr[i]<0){
        //     arr[i] = arr[i] * -1 ;
        // }
        sum = arr[i] + sum;
    }
    if (sum < 0)
        sum = -sum;

    printf("%lld\n", sum);
}