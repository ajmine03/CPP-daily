#include <stdio.h>
#include<string.h>

int main()
{
    char st[6];

    for (int i = 0; i < 5; i++)
    {
        scanf("%c",st);
    }

    // st[5] = '\0';
    printf("%c", st);
    return 0;
}