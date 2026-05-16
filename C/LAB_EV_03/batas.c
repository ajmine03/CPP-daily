#include <stdio.h>
int main()
{
    float A;
    scanf("%f", &A);
    if (A >= 0.00 && A <= 5.00)
    {
        printf("batash\n");
    }
    else if (A >= 5.00 && A <= 12.00)
    {
        printf("kuddus\n");
    }
    else if (A >= 12.00)
    {
        printf("palao\n");
    }
}