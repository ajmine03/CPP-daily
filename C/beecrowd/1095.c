#include <stdio.h>

int main()
{
    int I = 1;
    for (int i = 60; i >= 0; i = i - 5)
    {

        printf("I=%d ", I);
        I = I + 3;
        printf("J=%d\n", i);
    }

    return 0;
}