#include <stdio.h>
int main()
{
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    if (a == 'A')
    {
        if (b == 'A' || b == 'B')
        {
            if (c == 'A' || c == 'B' || c == 'C')
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {
        printf("No\n");
    }
}