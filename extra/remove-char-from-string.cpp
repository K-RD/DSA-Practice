#include<iostream>
using namespace std;

string removeChar(string s, string res="", char r = 'x', int index = 0){
    if(index <= 0){
        if(s[index] != r){
            res = res+s[index];
            return res;
        }else{
            return "";
        }
    }else{
        res = removeChar(s,res,r,index-1);
        if(s[index] != r){
            res = res+s[index];
            return res;
        }else{
            return res;
        }
    }
    return res;
}

int main()
{
    string s = "xxxabxcbxd";
    string res = removeChar(s,"",'x',s.size());

    cout<<"original string : "<<s<<endl<<"resulting string : "<<res<<endl;

    return 0;
}
