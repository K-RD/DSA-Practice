// Linear Search in array
// It searches only the first occurrences of the number.

#include<stdio.h>

int main(){
    int n;
    int arr[n];
    // int n = 12;
    // int arr[12] = {10, 4, 6, 7, 9, 16, 32, 64, 7, 3, 5, 2};
    printf("Enter the number of element to store in array:: ");
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

    int elm;
    printf("\nEnter an Element to search:: ");
    scanf("%d",&elm);

    for(int i=0;i<n;i++){
        if(arr[i]==elm){
            printf("The element %d is stored at %d index in array.",arr[i],i);            
        }
    }
    
    return 0;
}