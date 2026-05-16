#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int count = 0;
    int prime = 1;
    int num ;
    int M = 2 ;
    while(1){
        
        for (int i = 0; i < N; i++)
        {
            if (M % i == 0)
            {
                count++;
            }
            if (count > 1)
            {
                break;
            }
        }
        if (count == 1)
        {
            prime++;
            num = M;
        }
        M = M+1;
        if(prime == N){
            break;
        }
    }
    printf("%d\n", num);
}
