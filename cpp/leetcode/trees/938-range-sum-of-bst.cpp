
// https://leetcode.com/problems/range-sum-of-bst/

// Definition for a binary tree node.
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
    int res = 0;
    void traverse(TreeNode *root, int L, int R)
    {
        if (root != nullptr)
        {
            if (L <= root->val && root->val <= R)
            {
                res += root->val;
            }

            if (L < root->val)
            {
                traverse(root->left, L, R);
            }
            if (R > root->val)
            {
                traverse(root->right, L, R);
            }
        }
    }

    int rangeSumBST(TreeNode *root, int low, int high)
    {
        traverse(root, low, high);
        return res;
    }
};