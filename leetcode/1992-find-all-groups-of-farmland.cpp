#include<iostream>
// #include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size();
        int n = land[0].size();
        vector<vector<int>> res;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (land[i][j] == 1) {
                    int tr = i;
                    int tc = j;
                    while (tr < m && land[tr][j] == 1)tr++;
                    while (tc < n && land[i][tc] == 1) tc++;
                    res.push_back({i, j, tr - 1, tc - 1});
                    for(int p = i;p<tr;++p){
                        for(int q=j;q<tc;++q){
                            land[p][q]=0;
                        }
                    }
                }
            }
        }
        return res;
    }
};

int main(){
    vector<vector<int>> land1 {{1,0,0},{0,1,1},{0,1,1}};
    vector<vector<int>> land2 {{1,1},{1,1}};
    vector<vector<int>> land3 {{0,0},{0,0}};
    vector<vector<int>> land4 {{1,1,0,0},{0,1,1,1},{0,0,0,1},{0,0,0,1}};
    vector<vector<int>> land5 {{1,1,0,0},{0,1,1,1},{0,0,0,1},{0,0,0,0}};

    Solution s;
    vector<vector<int>> res1 = s.findFarmland(land1);
    vector<vector<int>> res2 = s.findFarmland(land2);
    vector<vector<int>> res3 = s.findFarmland(land3);
    vector<vector<int>> res4 = s.findFarmland(land4);
    vector<vector<int>> res5 = s.findFarmland(land5);

    for(auto i: res1){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(auto i: res2){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(auto i: res3){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(auto i: res4){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(auto i: res5){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
