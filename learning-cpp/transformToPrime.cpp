//{ Driver Code Starts
// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int minNumber(int arr[], int N)
    {
        int s = 0;
        for (int i = 0; i < N; i++)
        {
            s = s + arr[i];
        }

        int prime = 0;
        int temp = s;
        while (!prime)
        {
            if(s==1)
            {
                return 1;
            }
            int d=0;
            for (int i = 2; (i * i) <= temp; i++)
            {
                if (temp % i == 0)
                {
                    d=d+1;
                    // return (temp-s);
                    // return 13;
                    // break;
                }
            }
            if(d>0)
            {
                temp=temp+1;
            }else{
                prime=1;
                return (temp-s);
            }
        }
        return (temp - s);
    }
};

//{ Driver Code Starts.

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n) << endl;
    // }
    return 0;
}
// } Driver Code Ends