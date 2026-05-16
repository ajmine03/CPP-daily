#include <stdio.h>
#include <string.h>

int main()
{
    char S1[10005];
    fgets(S1, sizeof(S1), stdin);
    int i = 0;
    while (S1[i] != '\\')
    {
        printf("%c", S1[i]);
        i++;
    }
}