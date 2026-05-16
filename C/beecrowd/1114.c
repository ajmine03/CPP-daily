#include <stdio.h>

int main()
{
    while (1)
    {
        int A;
        scanf("%d", &A);
        if (A == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}