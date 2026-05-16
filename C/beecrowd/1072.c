#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int arry[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arry[i]);
    }
    int count = 0 ;
    for (int i = 0; i < N; i++)
    {
        if (arry[i]>=10 && arry[i]<=20)
        {
           count++ ;
        }
        
    }
    printf("%d in\n",count);
    printf("%d out\n",N - count);

    
    
    return 0;
}