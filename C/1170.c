#include <stdio.h>
#include<math.h>
int main()
{
    int N;
    int Count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        double A;
        int days=0;

        scanf("%lf",&A);
        while(A>1.0){
            A=A/2.0 ;
            days++ ;
        }
        printf("%d dias\n", days);
        
    }
    return 0;
}