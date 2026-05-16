// 12. Write a program to print the reverse of a given number.
#include <stdio.h>
int main()
{
    int n;
    int rev=0;
    scanf("%d", &n);
    if (n < 0)
        n = -n;
    
    while(n>0){
        int rem = n%10;
        n = n/10 ;
        rev = rev * 10 + rem ;

    }
    printf("%d\n",rev);
}