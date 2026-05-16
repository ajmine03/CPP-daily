#include <stdio.h>

int main()
{
    float array[6];

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &array[i]);
    }
    int Count = 0;
    float sum = 0.00;
    for (int i = 0; i < 6; i++)
    {
        if (array[i] > 0)
        {
            Count++;
            sum += array[i];
        }
    }
    printf("%d valores positivos\n", Count);

    printf("%.1f\n", sum/Count); 

    return 0;
}