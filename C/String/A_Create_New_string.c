#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1000], s2[1000];
    scanf("%s %s", &s1, &s2);
    int l = strlen(s1);
    int l2 = strlen(s2);
    printf("%d %d\n", l, l2);

    printf("%s %s\n", s1, s2);
}