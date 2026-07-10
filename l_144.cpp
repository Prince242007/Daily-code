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
    void preorder(TreeNode *&root, vector<int> &res)
    {
        if (root == NULL)
            return;
        res.push_back(root->val);
        preorder(root->left, res);
        preorder(root->right, res);
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> v;
        preorder(root, v);
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