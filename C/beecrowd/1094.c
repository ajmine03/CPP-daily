#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    double total_animal = 0;
    double total_Coelho = 0;
    double total_Rato = 0;
    double total_Sapo = 0;
    for (int i = 0; i < N; i++)
    {
        int A;
        char B;

        scanf("%d %c", &A, &B);
        total_animal += A;

        if (B == 'C')
        {
            total_Coelho += A;
        }
        if (B == 'R')
        {
            total_Rato += A;
        }
        if (B == 'S')
        {
            total_Sapo += A;
        }
    }
    printf("Total: %.0lf cobaias\n", total_animal);
    printf("Total de coelhos: %.0lf\n", total_Coelho);
    printf("Total de ratos: %.0lf\n", total_Rato);
    printf("Total de sapos: %.0lf\n", total_Sapo);
    printf("Percentual de coelhos: %.2lf %%\n", total_Coelho / total_animal * 100.00);
    printf("Percentual de ratos: %.2lf %%\n", total_Rato / total_animal * 100.00);
    printf("Percentual de sapos: %.2lf %%\n", total_Sapo / total_animal * 100.00);

    return 0;
}