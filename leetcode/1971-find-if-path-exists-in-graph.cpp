#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool validPath(int n, vector<vector<int>> &edges, int source, int destination){
            vector<int> visited(n);

            unordered_map<int, vector<int>> graph(n);
            for(auto val : edges){
                graph[val[0]].push_back(val[1]);
                graph[val[1]].push_back(val[0]);
            }
            stack<int> st;
            st.push(source);
            while(!st.empty()){
                int temp = st.top();
                st.pop();
                visited[temp] = 1;

                if(temp == destination)return true;

                for(auto val : graph[temp]){
                    if(!visited[val])st.push(val);
                }
                
            }
            return true;
        }
};

int main()
{
    Solution s;
    int n1 = 3;
    vector<vector<int>> v1 {{0,1},{1,2},{2,0}};
    int source1 = 0;
    int destination1 = 2;

    cout<<"Testcase 1 :\n";
    cout<<s.validPath(n1,v1,source1,destination1)<<endl;

    return 0;
}
