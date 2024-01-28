// Inserting element in the array at the  given index.

#include <stdio.h>

void insertion(int *, int, int, int);
void printingArray(int *, int);
int main()
{
    int size = 10;
    int arr[10] = {3, 6, 2, 7, 2, 9, 4};

    // Printing elements of the array.
    printingArray(arr, size);

    //  Inserting element 20 in the given array at index 4.
    int index = 4; // Index must be lesser than size of the array.
    int element = 20;
    insertion(arr, size, index, element);

    // Printing elements of the array.
    printingArray(arr, size);

    return 0;
}

void insertion(int *array, int size, int index, int element)
{
    for (int i = size - 2; i >= index; i--)
    {
        array[i + 1] = array[i];
    }
    array[index] = element;
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