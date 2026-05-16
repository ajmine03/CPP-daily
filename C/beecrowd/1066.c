#include <stdio.h>
int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    int count_Even = 0;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] % 2 == 0)
        {
            count_Even++;
        }
    }
    int count_odd = 0;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] % 2 != 0)
        {
            count_odd++;
        }
    }
    int count_pos = 0;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] > 0)
        {
            count_pos++;
        }
    }
    int count_neg = 0;
    for (int i = 0; i < 5; i++)
    {
        if (array[i] < 0)
        {
            count_neg++;
        }
    }
    printf("%d valor(es) par(es)\n", count_Even);
    printf("%d valor(es) impar(es)\n", count_odd);
    printf("%d valor(es) positivo(s)\n", count_pos);
    printf("%d valor(es) negativo(s)\n", count_neg);
    return 0;
}