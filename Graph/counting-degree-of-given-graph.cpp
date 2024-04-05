#include<iostream>
using namespace std;

int main()
{
    int arr[5][5] = {{0, 1, 0, 1, 1},
        {1, 0, 1, 1, 0},
        {0, 1, 0, 1, 0},
        {1, 1, 1, 0, 1},
        {1, 0, 0, 1, 0}};
            
    int row = 5,col = 5;
    
    for(int i=0; i<row;++i){
        int count=0;
        for(int j=0;j<col;++j){
            if(arr[i][j]==1)count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

