#include<iostream>
// #include<bits/stdc++.h>
using namespace std;


void nStarTriangle(int n) {
    // Write your code here.
    // for(int i=n;i>=1;i--){
	// 	for(int j=1;j<=(n*2);j++){
    //         if(j>=i && j<=(n+(n-i))){
    //             cout << "*";
    //         }else{
    //             cout << "-";
    //         }
	// 	}
	// 	cout << endl;
	// }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=((2*n)-i);j++){
    //         if(j>=i){
    //             cout << "*";
    //         }else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=(2*n);j++){
    //         if(j<=i ){
    //             cout << j<<" ";
    //         }else if(j>=(n+(n-i+1))){
    //             cout << (n+1-(j-n))<<" ";
    //         }else{
    //             cout << "- ";
    //         }
    //     }
    //     cout << endl;
    // }

    // for(int i = n ;i>0;i--){
    //     for(int j=0; j<i;j++){
    //         char ch='A';
    //         cout << char(ch+j) << " ";
    //         // cout << j<<" ";
    //     }
    //     cout << endl;
    // }


    // for(int i=1;i<=n;i++){
    //     //space
    //     for(int j=1;j<=(n-i);j++){
    //         cout << " ";
    //     }

    //     //Alphabet
    //     int ch=65;
    //     for(int j=1;j<=(i+(i-1));j++){
            
    //         if(j<((i+(i))/2)){
    //             // cout << char('A'+j-1);
    //             cout << char(ch++);
    //         }else{
    //             // cout << char('A'+(j-(j-1)));
    //             cout << char(ch--);
    //         }
            
    //     }

    //     //space
    //     for(int j=1;j<=(n-i);j++){
    //         cout << " ";
    //     }
    //     cout<<endl;

    // }


    // for(int i=0;i<n;i++){
    //     //star
    //     for(int j=0;j<(n-i);j++){
    //         cout << "*" << " ";
    //     }

    //     //space
    //     for(int j=0;j<(i);j++){
    //         cout << " " << " ";
    //     }
    //     //space

    //     for(int j=0;j<(i);j++){
    //         cout << " " << " ";
    //     }

    //     //star
    //     for(int j=0;j<(n-i);j++){
    //         cout << "*" << " ";
    //     }
    //     cout<< endl;
    // }
    

    // for(int i=0;i<n;i++){
    //     //star
    //     for(int j=0;j<=(i);j++){
    //         cout << "*" << " ";
    //     }

    //     //space
    //     for(int j=0;j<(n-i-1);j++){
    //         cout << " " << " ";
    //     }
    //     //space

    //     for(int j=0;j<(n-i-1);j++){
    //         cout << " " << " ";
    //     }

    //     //star
    //     for(int j=0;j<=(i);j++){
    //         cout << "*" << " ";
    //     }
    //     cout<< endl;
    // }

    // for(int i=1;i<(2*n);i++){
    //     //upper part
    //     if(i<=n){
    //         //star
    //         for(int j=0;j<i;j++){
    //             cout<<"*"<<" ";
    //         }


    //         //space
    //         for(int j=0;j<(n-i);j++){
    //             cout<<" "<<" ";
    //         }

    //         //space
    //         for(int j=0;j<(n-i);j++){
    //             cout<<" "<<" ";
    //         }

    //         //star
    //         for(int j=0;j<i;j++){
    //             cout<<"*"<<" ";
    //         }
    //     }else{
    //         //lower part
    //         //star
    //         for(int j=0;j<(n-(i-n));j++){
    //             cout<<"*"<<" ";
    //         }


    //         //space
    //         for(int j=0;j<(i-n);j++){
    //             cout<<" "<<" ";
    //         }

    //         //space
    //         for(int j=0;j<(i-n);j++){
    //             cout<<" "<<" ";
    //         }

    //         //star
    //         for(int j=0;j<(n-(i-n));j++){
    //             cout<<"*"<<" ";
    //         }


    //     }
    //     cout<<endl;
        

    // }

    // for(int i=0;i<n;i++){
    //     if(i>0 && i<n-1){
    //         cout<<endl;
    //         //star
    //         cout<<"*";
    //         //space
    //         for(int j=1;j<(n-1);j++){
    //             cout<<"-";
    //         }
    //         //star
    //         cout<<"*";
    //         cout<<endl;
    //         if(i==n-2){
    //             cout<<endl;
    //         }

    //     }else{
    //         for(int j=0;j<(n);j++){
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    // }

    // for(int i=1;i<(2*n);i++){
    //     for(int j=1;j<(2*n);j++){
    //         if(i==1 || j==1 || j==((2*n)-1) || i==((2*n)-1) ){
    //             if(j==((2*n)-1)){
    //                 cout<<n<<endl;
    //             }else{
    //             cout<<n;
    //             }
    //         }else{
    //             cout<<"+";
    //         }
    //     }
    // }


    // for(int i=1;i<(2*n);i++){
    //     for(int j=1;j<(2*n);j++){
    //         if(i<=n){
    //             int p=i;
    //             if(i==p || j==p || j==((2*n)-p) || i==((2*n)-p) ){
    //                 if(j==((2*n)-1)){
    //                     cout<<n<<endl;
    //                 }else{
    //                 cout<<n-p+1;
    //                 }
    //             }else{
    //                 cout<<"+";
    //             }
    //         }
            
    //     }
    // }

    for(int i=0;i<(2*n-1);i++){
        for(int j=0;j<(2*n-1);j++){
            if(i<n){
                if(j<=i){
                    cout<<n-j;
                }else if(j>=(2*n-i-1)){
                    cout<< j-(n-2);
                }else{
                    cout<< n-i;
                }
            }else{
                if((i-n)<(n-j-2)){
                    cout<<n-j;
                }else if((i-n)==(n-j-2)){
                    cout<<i-n+2;
                }else if(i==j){
                    cout<<i-n+2;
                }else if(j>i){
                    cout<<(j-n+2);
                }else{
                    cout<<i-n+2;
                }
            }
        }
        cout<<endl;

    }

}

int main(){ 
    int n;
    cin >> n;
    nStarTriangle(n);
    return 0;
}