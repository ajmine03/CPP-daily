#include <stdio.h>

int main() {
    int N ;
    scanf("%d",&N);
    // 2 3 5 7 ;


    if (N%2==0)
    {
        printf("2 ");
    }
    if (N%3==0)
    {
        printf("3 ");
    }
    if (N%5==0)
    {
        printf("5 ");
    }
    if (N%7==0)
    {
        printf("7 ");
    }
    
    return 0;
}


