#include<stdio.h>
#include<stdio.h>

int factorial(int num) {
    if (num <= 1) return 1;
    return num * factorial(num - 1);
}

int main(){
    int n, r;
    scanf("%d %d", &n, &r);
    
    if (r > n) {
        printf("Invalid input\n");
        return 0;
    }
    
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    printf("nCr = %d\n", ncr);
    
    return 0;
}