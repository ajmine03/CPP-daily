#include <stdio.h>
int main()
{
    printf("Enter the value of n : ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int index;
    printf("Which index you want to delete : ");
    scanf("%d", &index);
    printf("Array after deletation of index %d :", index);
    int arr_2[n - 1];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != index)
        {
            arr_2[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        printf(" %d", arr_2[i]);
    }
}