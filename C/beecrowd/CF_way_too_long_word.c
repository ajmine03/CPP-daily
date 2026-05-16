#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int N;
        char STR[100];
        scanf("%s", STR);
        // printf("%s", STR);
        int M = strlen(STR);
        if (M > 10)
        {
            printf("%c", STR[0]);
            printf("%d", strlen(STR) - 2);
            printf("%c\n", STR[M - 1]);
        }
        else
        {
            printf("%s\n", STR);
        }
    }

    return 0;
}