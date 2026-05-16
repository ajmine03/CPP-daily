#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A, B;
    while (N--)
    {
        scanf("%d %d", &A, &B);
        int Plate = A / B;
        if (Plate > 20)
        {
            printf("%d\n", 20);
        }
        else
        {
            printf("%d\n", Plate);
        }
    }
}