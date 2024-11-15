// input : [10, 20, 40, -30, 45, 46, -20, -15]
// output: [10, -30, 20, -20, 40, -15, 45, 46]

#include<stdio.h>

void arrangeArr(int *arr[], int i, int j, int len){
//
}

void traversal(int* arr,int len){
    for(int i = 0; i < len; i++){
        printf("%d\t",(*arr));
        arr++;
    }
}

int main()
{
    int arr[] = {10, 20, 40, -30, 45, 46, -20, -15};
    int arrLength = 8;
    int i = 0, j = 0;
    traversal(arr,arrLength);

    // Using while loop for the traversal
    // while(i < arrLength)
    // {
    //     if(i%2){
    //         if(arr[i] >= 0){

    //         }else{
    //             printf("%d,\t",arr[i]);
    //         }
    //     }else{

    //     }
    //     printf("%d,\t",arr[i]);
    //     i++;
    // }
}
        

