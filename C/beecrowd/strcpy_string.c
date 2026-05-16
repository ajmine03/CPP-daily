#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "hello world";
    char target[12];
    strcpy(target, st);
    printf("%s %s", st, target);
    return 0;
}