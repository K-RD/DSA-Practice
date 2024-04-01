#include<iostream>
using namespace std;

class Solution{
    public:
        int heightChecker(vector<int>& heights){

            vector<int> countHeight(101, 0);

            for (int h : heights) {
                ++countHeight[h];
            }

            int nonMatchingCount = 0;
            int expectedHeightPointer = 1;

            for(auto height : heights ){
                while(countHeight[expectedHeightPointer ] == 0){
                    ++expectedHeightPointer;
                }

                if(expectedHeightPointer != height ){
                    ++nonMatchingCount;
                }

                --countHeight[expectedHeightPointer];
            }

            return nonMatchingCount;
        }
};

int main() {
    // Example usage
    vector<int> heights = {1, 1, 4, 2, 1, 3};
    
    Solution obj;
    int result = obj.heightChecker(heights);
    
    cout << "Number of indices where heights[i] != expected[i]: " << result << endl;

    return 0;
}
