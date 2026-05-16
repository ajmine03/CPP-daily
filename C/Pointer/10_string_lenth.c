// String Length Using Pointer
#include <stdio.h>
int main()
{
    char str[100];
    char *ptr;
    int count = 1;
    fgets(str, 100, stdin);
    ptr = str;
    while ((*ptr != '\0'))
    {
        // if (*ptr == '\0')
        // {
        //     break;
        // }
        printf("%d", count);
        printf(" %c\n", *ptr);
        ptr++;
        count++;
        
    }
    printf("%d\n", count-2);
}
