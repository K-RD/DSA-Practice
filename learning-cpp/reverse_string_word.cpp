// #include <bits/stdc++.h> 
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string input)
{
    // Write your code here
    string s;
    int temp=0;
    for(int i=0;i<=input.size();i++){
        if(input[i]==' '){
            for(int j=i-1;j>=temp;j--){
                s+=input[j];
                // input.erase(j);
            }
            temp=i;
            // s+=' ';
        }else if(i==input.size()){
            for(int j=i;j>temp;j--){
                s+=input[j];
                // input.erase(j);
            }
            s+=' ';
            // temp=i;
        }
    }
    return s;
}

int main()
{

    // string str="This is not funny";
    cout<<"Enter anything:: ";
    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    
}