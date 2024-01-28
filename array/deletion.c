//  Deletion of element in an array by its index.
#include <stdio.h>

void deletion(int *, int size, int index);
void printingArray(int *, int);

int main()
{
    int size = 10;
    int arr[10] = {3, 6, 2, 7, 2, 9, 4};

    // Printing elements of the array.
    printingArray(arr, size);

    //  Deleting element at index 4.
    int index = 4; // Index must be lesser than size of the array.
    printf("\nDeleting element at index %d \n", index);
    deletion(arr, size, index);

    // Printing elements of the array.
    printingArray(arr, size);

    return 0;
}

void deletion(int *array, int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
}

void printingArray(int *array, int size)
{
    printf("\nPrinting each element of the array: \n");
    for (int i = 0; i < size; i++)
    {
        // printf("arr[%d] = %d \n", i, array[i]);
        printf("%d \t", array[i]);
    }
}