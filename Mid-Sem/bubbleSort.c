// Mid Sem DSA
// Bubble Sort Algorithm

#include <stdio.h>

int main()
{
    int n;
    int arr[n];
    // int n = 12;
    // int arr[12] = {10, 4, 6, 7, 9, 16, 32, 64, 7, 3, 5, 2};
    printf("Enter the number of element:: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d of the array:: ", (i + 1));
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is as follow.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nThe sorted array is as follow.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}