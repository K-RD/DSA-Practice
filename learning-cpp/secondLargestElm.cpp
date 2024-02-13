// Program to find second largest element in an array.

#include<iostream>

int secondLargestElm(int arr[],int n){
    int min=0;
    for (int k = 0; k < n; k++)
    {
        if (arr[min]>arr[k])
        {
            min=k;
        }
        
    }
    // std::cout<<arr[min];
    int max=min;
    int secondMax=min;
    

    for(int i=0;i<n;i++)
    {
        if (arr[max]<arr[i])
        {
            secondMax=max;
            max=i;
        }
    }
    if (max==secondMax)
    {
        return -1;
    }
    
    return secondMax;
    
    return -1;
}

int main()
{
    int size;
    std::cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<secondLargestElm(arr,size);
    
    return 0;
}