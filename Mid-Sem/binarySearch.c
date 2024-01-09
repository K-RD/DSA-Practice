// Binary Search
// Ths program implements binary search algorithm to search an element in a sorted array.

#include <stdio.h>

int main()
{
    int n, key;
    printf("Enter the number of array:: ");
    scanf("%d", &n);

    printf("Enter the numbers in sorted array.");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched:: ");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int mid;
    int flag;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (flag == 1)
    {
        printf("Element %d is found at index %d", key, mid);
    }
    else
    {
        printf("Element %d is not found.", key);
    }

    return 0;
}