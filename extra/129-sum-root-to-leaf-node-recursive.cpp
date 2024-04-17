#include<iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0), left(nullptr), right(nullptr){}
    TreeNode(int x):val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode* leftNode, TreeNode* rightNode):val(x), left(leftNode), right(rightNode){}
};

class Solution{
    public:
        int sumNumbers(TreeNode* root, int temp = 0, int sum = 0)
        {
            cout<<root->val<<"\t";
            temp = ((temp*10)+root->val);
            if(root->left == nullptr && root->right == nullptr){
                return (sum+temp);
            }

            if(root->left != nullptr)
                sum = sumNumbers(root->left,temp,sum);
            if(root->right != nullptr){
                sum = sumNumbers(root->right,temp,sum);
            }
            return sum;
        }
};

int main()
{
    Solution s;

    TreeNode* n1 = new TreeNode(5);
    TreeNode* n2 = new TreeNode(1);
    TreeNode* nine = new TreeNode(9,n1,n2);
    TreeNode* z = new TreeNode(0);
    TreeNode* root1 = new TreeNode(4,nine, z);

    int res1 = s.sumNumbers(root1);
    cout<<res1<<endl;

    return 0;
}
