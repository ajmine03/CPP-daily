    /*6. Print Unique Elements

    Write a program in C to print all unique elements in an array.
    Test Data :
    Print all unique elements of an array:
    ------------------------------------------
    Input the number of elements to be stored in the array: 4
    Input 4 elements in the array :
    element - 0 : 3
    element - 1 : 2
    element - 2 : 2
    element - 3 : 5
    Expected Output :
    The unique elements found in the array are:
    3 5*/

    #include <stdio.h>

    int main()
    {
        printf("Print all unique elements of an array: \n");
        int N;
        scanf("%d", &N);
        printf("------------------------------------------\n");
        printf("Input the number of elements to be stored in the array: %d\n", N);
        printf("Input %d elements in the array :\n", N);
        int array_1[N];
        // int array_2[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &array_1[i]);
            printf("element - %d : %d\n", i, array_1[i]);
            // array_2[N] = array_1[i]
        }

        printf("Expected Output\n");
        printf("The unique elements found in the array are: \n");
        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (array_1[i] != array_1[j])
                {
                    printf("%d", array_1[i]);
                }
            }
        }

        return 0;
    }