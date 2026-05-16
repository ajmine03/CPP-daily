#include <stdio.h>

int main()
{
    int W, M;
    scanf("%d %d", &W, &M);

    if (W > 100)
    { // Choto Menu
        if (M >= 500)
        {
            printf("Fruits\n");
        }
        else
        {
            printf("Salad\n");
        }
    }
    else
    { // Boro Menu
        if (M >= 500)
        {
            printf("Biriyani\n");
        }
        else
        {
            printf("Khichuri\n");
        }
    }

    return 0;
}
