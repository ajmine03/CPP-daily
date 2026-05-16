#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    int a=0 , b=1;
    int c ;
    for (int i = 0; i < A; i++)
    {   
       if (i==0)
       {
        printf("%d",a);
       }
       else if (i==1)
       {
        printf(" %d",b);
       }
       else 
       {
        c=b+a ;
        a=b;
        b=c;
        printf(" %d",c);
       }
       
       
    }
    printf("\n");
    return 0 ;
}