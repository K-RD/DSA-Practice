#include<iostream>
using namespace std;

int sum(int num){
    int sumEven=0,sumOdd=0;

    //Length of number
    int lenNum=0;
    while(num>0){
        int rem=num%10;
        if(rem%2==0){
            sumEven+=rem;
        }else{
            sumOdd+=rem;
        }
        num=num/10;
        lenNum++;
    }
    cout<<sumEven<<" "<<sumOdd<<endl;
    return 5;
}

double sum(int num,int num2){
    int sumEven=0,sumOdd=0;

    //Length of number
    int lenNum=0;
    while(num>0){
        int rem=num%10;
        if(rem%2==0){
            sumEven+=rem;
        }else{
            sumOdd+=rem;
        }
        num=num/10;
        lenNum++;
    }
    cout<<sumEven<<" "<<sumOdd<<endl;
    return 5.5;
}

int main(){

    int num;
    cin>>num;
    int ret=sum(num);
    int retDouble=sum(num);
    cout<<"Return Value is:: "<<ret;
    cout<<"Return Value is:: "<<retDouble;


    return 0;
}