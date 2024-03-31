#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int matSize = matrix.size();
        int colSize = matrix[0].size();

        vector<int> minVecRow(matSize, INT_MAX);
        vector<int> maxVecCol(colSize, INT_MIN);

        for (int i = 0; i < matSize; ++i) {
            for (int j = 0; j < colSize; ++j) {
                minVecRow[i] = min(minVecRow[i], matrix[i][j]);
                maxVecCol[j] = max(maxVecCol[j], matrix[i][j]);
            }
        }

        vector<int> ret;
        for (int i = 0; i < matSize; ++i) {
            for (int j = 0; j < colSize; ++j) {
                if (minVecRow[i] == maxVecCol[j]) {
                    ret.push_back(minVecRow[i]);
                }
            }
        }

        return ret;
    }
};

void printVector(vector<int> vec) {
    cout << endl;
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    Solution s;

    vector<vector<int>> mat1 = {{3, 7, 8}, {9, 11, 13}, {15, 16, 17}};
    vector<vector<int>> mat2 = {{1, 10, 4, 2}, {9, 3, 8, 7}, {15, 16, 17, 12}};
    vector<vector<int>> mat3 = {{7, 8}, {1, 2}};

    vector<int> mat1_res = s.luckyNumbers(mat1);
    vector<int> mat2_res = s.luckyNumbers(mat2);
    vector<int> mat3_res = s.luckyNumbers(mat3);

    cout << "case 1 : " << endl;
    printVector(mat1_res);
    cout << "case 2 : " << endl;
    printVector(mat2_res);
    cout << "case 3 : " << endl;
    printVector(mat3_res);

    return 0;
}

