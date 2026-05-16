#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    int arr_s[N];
    int arr_k[N];
    int j = 0;

    for (int i = 0; i < N; i++)
    {

        scanf("%d", &arr[i]);

        if (arr[i] <= 10)
        {
            arr_s[j] = arr[i];
            arr_k[j] = i;
            j++;
        }
    }
    for (int i = 0; i < j; i++){
        printf("A[%d] = %d\n",arr_k[i],arr_s[i]);
    }
}