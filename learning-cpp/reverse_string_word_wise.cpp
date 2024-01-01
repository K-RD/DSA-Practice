#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    string s="";
    // for(int i=input.size()-1;i>=0;i--){
    //     for(int j=i;j>=0;j--){
    //         if(input[j]==' '){
    //             // cout<<"inside if"<<endl;
    //             for(int k=j;k<=i;k++){
    //                 // cout<<"inside for"<<endl;
    //                 cout<<input[k];
    //                 s+=input[k];
    //             }
    //             i=j;
    //             break;
    //         }
    //     }
    // }
    for(int p=input.size()-1;p>=0;p--){
        if(input[p]==' '){
            for(int q=p+1;q<input.size();q++){
                s+=input[q];
            }
            s+=' ';
            input.erase(p);
        }else if(p==0){
            for(int q=p;q<input.size();q++){
                s+=input[q];
            }
            s+=' ';
            input.erase(p);
        }
    }

    // for(int p=input.size()-1;p>=0;p--){
    //     if(input[p]==' ' || p==0){
    //         for(int q=p+1;q<=input.size();p++){
    //             s+=input[q];
                
    //         }
        
    //     }
    //     s+=' ';
    //     // input.erase()

    // }
    // cout<<s;
    return s;

}

int main()
{
    string s;
    // getline(cin, s);
    s="Welcome to Coding Ninjas";
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}