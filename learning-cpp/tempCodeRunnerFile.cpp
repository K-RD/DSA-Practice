#include<iostream>

int largestElm(int arr[],int n){
    int max=arr[0];
    int maxIndex=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            maxIndex=i;
        }
    }

    return maxIndex;
}
int main()
{
    int arr[]={10,20,5,3,6,26,7};
    std::cout<<largestElm(arr,7);

    // std::cout<<arr[6];


    return 0;
}
