#include <iostream>
using namespace std;

void printVector(vector<int> nums){
    cout << endl;
    
    for(int num : nums){
        cout << num << " ";
    }
    cout << endl;
}

void printMatrix(vector<vector<int>> &matrix)
{
    cout << endl;
    for (vector<int> vec : matrix)
    {
        for (int num : vec)
            cout << num << " \t";
        cout << endl
             << endl;
    }
}

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int length = matrix.size();
        for(int i = 0; i < length/2; i++){
            for(int j = i; j < length - i - 1; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[length - 1 - j][i];
                matrix[length - 1 - j][i] = matrix[length - 1 - i][length - 1 - j];
                matrix[length - 1 - i][length - 1 - j] = matrix[j][length - 1 - i];
                matrix[j][length - 1 - i] = temp;
            }
        }


    }
};


int main()
{
    vector<vector<int>> matrix3 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // vector<vector<int>> matrix4 = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    vector<vector<int>> matrix4 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    Solution s;
    printMatrix(matrix3);
    s.rotate(matrix3);
    printMatrix(matrix3);

    cout << endl
         << endl;

    printMatrix(matrix4);
    s.rotate(matrix4);
    printMatrix(matrix4);

    return 0;
}