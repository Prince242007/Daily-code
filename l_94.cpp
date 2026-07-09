#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void inorder(TreeNode *&root, vector<int> &res)
    {
        if (root == NULL)
            return;
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v;
        inorder(root, v);
        return v;
    }
};
int main()
{
    Solution s;
    TreeNode *first = new TreeNode(1);
    TreeNode *second =new TreeNode(2);
    TreeNode *third =new TreeNode(3);
    TreeNode *fourth =new TreeNode(4);
    TreeNode *fifth =new TreeNode(5);
    
    first->left=second;
    first->right=third;
    second->left=fourth;
    fourth->right=fifth;
    
        return 0;
}