// maximum value define kora
#include <stdio.h>
int main()
{
    int array[] = { 23, 12, 45, 20, 90, 89, 95, 32, 65, 19 }; // ekhane array declaretion hobe

    int n = sizeof(array) / sizeof(array[0]); //n er value ber korte eita use korci
    int array_max = array[0];                  //array max ta array0 te dhore nisi.
    for (int i = 0; i < n; i++)
    {
        if (array_max < array[i])  //array max er theke counting value boro hole seta max hobe,same vabe min o kora jbe
        {
            array_max = array[i];  // jekhane max pawa gese seita sellect hoiche. 
            // printf("%d\n", array[i]);
        }
        // printf("%d\n", array[i]);
    }

    printf("%d", array_max);

    return 0;
}