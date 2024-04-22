#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        string starting = "0000";
        unordered_set<string> visited;
        queue<string> q;
        int moves = 0;
        q.push(starting);
        visited.insert(starting);
        while(!q.empty()){
            int qSize = q.size();
                cout<<endl;
            for(int p=0; p<qSize;p++){
                string temp = q.front();
                cout<<temp<<endl;
                q.pop();
                if(temp == target){
                    cout<<temp<<endl;
                    return moves;
                }
                for(int wheelNo = 0; wheelNo<4;++wheelNo){
                    string increased = temp;
                    string decreased = temp;
                    increased[wheelNo] = ((increased[wheelNo]=='9')?'0':increased[wheelNo]+1);
                    decreased[wheelNo] = ((decreased[wheelNo]=='0')?'9':decreased[wheelNo]-1);
                    if(visited.count(increased) == 0 && find(deadends.begin(), deadends.end(), increased) == deadends.end()){
                        q.push(increased);
                        visited.insert(increased);
                    }
                    if(visited.count(decreased) == 0 && find(deadends.begin(), deadends.end(), decreased) == deadends.end()){
                        q.push(decreased);
                        visited.insert(decreased);
                    }
                }
            }
            ++moves;
        }

     return -1;   
    }
};

int main()
{
	Solution s;
	vector<string> deadends1{"0201","0101","0102","1212","2002"};
	string target1 = "0202";
	cout<<"Testcase 1:"<<endl;
	cout<<s.openLock(deadends1, target1)<<endl;

	vector<string> deadends2{"8888"};
	string target2 = "0009";
	cout<<"Testcase 2:"<<endl;
	cout<<s.openLock(deadends2, target2)<<endl;

	vector<string> deadends3{"8887","8889","8878","8898","8788","8988","7888","9888"};
	string target3 = "8888";
	cout<<"Testcase 3:"<<endl;
	cout<<s.openLock(deadends3, target3)<<endl;

	return 0;
}
