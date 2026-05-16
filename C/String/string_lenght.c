#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    int len = strlen(str);

    printf("Length = %d", len);
    return 0;
}
