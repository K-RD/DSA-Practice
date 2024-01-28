// Traversal of array using function.

#include <stdio.h>

void traversal(int *, int);

int main()
{
    int arr[5] = {2, 6, 8, 5, 3};
    int size = 5;
    printf("Printing the array:\n");
    traversal(arr, size);
    return 0;
}

void traversal(int *array, int size)
{
    printf("the address of array variable is %p \n", array);
    printf("the value of array variable is %d \n", *array);
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, array[i]);
    }
}