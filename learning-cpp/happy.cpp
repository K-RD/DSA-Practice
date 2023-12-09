#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

int main(){
    int len;
    cin>>len;
    int no[len];
    for(int i=0;i<len;i++){
        int temp;
        cin>>temp;
        // no[i].push_back(temp);
        no[i]=temp;
    }
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(no[i]==no[j]){
                cout<<no[i]<<endl;
            }
        }
    }
	
}