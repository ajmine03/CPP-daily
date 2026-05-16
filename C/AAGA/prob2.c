#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int P;
        scanf("%d", &P);
        int x = P / 100; 
        int y = P % 100; 
        if (x + y <= 10 && y <= 10)
            printf("%d\n", x + y);
        else
            printf("-1\n");
    }
    return 0;
}
