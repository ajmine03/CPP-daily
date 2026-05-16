#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    while (N)
    {

        for (int i = 0; i < N; i++)
        {

            {
                int A, B, C, D, E;
                scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
                if (A < 256 && B < 256 && C < 256 && D < 256 && E < 256)
                {

                    if (A >= 0 && A < 128 && B > 127 && C > 127 && D > 127 && E > 127)
                    {
                        printf("A\n");
                    }
                    else if (B >= 0 && B < 128 && A > 127 && C > 127 && D > 127 && E > 127)
                    {
                        printf("B\n");
                    }
                    else if (C >= 0 && C < 128 && B > 127 && A > 127 && D > 127 && E > 127)
                    {
                        printf("C\n");
                    }
                    else if (D >= 0 && D < 128 && B > 127 && C > 127 && A > 127 && E > 127)
                    {
                        printf("D\n");
                    }
                    else if (E >= 0 && E < 128 && B > 127 && C > 127 && D > 127 && A > 127)
                    {
                        printf("E\n");
                    }
                    else
                    {
                        printf("*\n");
                        break;
                    }
                }
                else
                {
                    printf("*\n");
                }
            }
        }
    }
    return 0;
}