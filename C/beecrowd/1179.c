#include <stdio.h>

int main()
{

    int N[15];
    int count_even = 0;
    int count_odd = 0;

    for (int i = 0; i < 15; i++)
    {

        scanf("%d", &N[i]); // 15 ta man nibe..
    }
    for (int i = 0; i < 15; i++)
    {
        if (N[i] % 2 == 0)
        {
            count_even++; // even koyta count korbe...
        }
        else
        {
            count_odd++; // odd koyta count korbe...
        }
    }

    int even[count_even];
    int odd[count_odd];
    int j = 0, k = 0;

    for (int i = 0; i < 15; i++)
    {
        if (N[i] % 2 == 0)
        {
            even[j] = N[i];
            j++;
        }
        else
        {
            odd[k] = N[i];
            k++;
        }
    }

    // for (int j = 0; j < count_even; j++)
    // {
    //     printf("%d\n", even[j]);
    // }
    // for (int k = 0; k < count_odd; k++)
    // {
    //     printf("%d\n", odd[k]);
    // }
    // int total_even_loop = count_even / 5;
    // int total_odd_loop = count_odd / 5;
    j = 0;
    k = 0;

    for (int i = 0; i < 3; i++) // 3 because total 15 , each portion highest 3 loop to cheack all
    {

        for (int i = 0; i < count_even; i++)
        {
            if (i < 5 && count_even >= 5)
            {
                printf("par[%d] = %d\n", i, even[j]);
                j++;
                count_even--;
                }
            else
            {
                break;
            }
        }
        for (int i = 0; i < count_odd; i++)
        {
            if (i < 5 && count_odd >= 5)
            {

                printf("impar[%d] = %d\n", i, odd[k]);
                k++;
                count_odd--;
            }
            else
            {
                break;
            }
        }
    }
    if (count_odd < 5 && count_odd != 0)
    {
        for (int i = 0; i < count_odd; i++)
        {
            printf("impar[%d] = %d\n", k, odd[k]);
            k++;
            count_odd--;
        }
    }
    if (count_even < 5 && count_even != 0)
    {
        for (int i = 0; i < count_even; i++)
        {
            printf("par[%d] = %d\n", i, even[j]);
            j++;
            count_even--;
        }
    }

    return 0;
}
