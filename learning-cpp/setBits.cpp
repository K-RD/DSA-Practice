// #include <bits/stdc++.h> 
#include <iostream>

using namespace std;

    //Write your countBits function here
int countBits(int n){
    int no1=0;
    while(n>0){
        if(n%2!=0){
            no1+=1;
        }
        n=n/2;
    }
    return no1;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}