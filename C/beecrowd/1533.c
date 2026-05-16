#include <stdio.h>
int main()
{
    while (1)
    {
        int n;
        scanf("%d", &n);
        int criminal[10001];
        int copy_criminal[10001];
        int temp;

        if (n == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &criminal[i]);
            copy_criminal[i] = criminal[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (criminal[i] < criminal[j])
                {
                    temp = criminal[j];
                    criminal[j] = criminal[i];
                    criminal[i] = temp;
                }
            }
        }
        // for(int i = 0;i<n;i++){
        //     printf("%d ",criminal[i]);
        // }
        for (int i = 0; i < n; i++)
        {
            if (criminal[1] == copy_criminal[i])
            {
                printf("%d\n", i + 1);
            }
        }
    }
}