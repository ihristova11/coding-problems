// https://leetcode.com/problems/sum-of-left-leaves/

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

class Solution {
public:
    int sum = 0;
    bool isLeaf(TreeNode* root)
    {
        return root->right == nullptr && root->left == nullptr;
    }
    
    int sumOfLeftLeaves(TreeNode* root, bool left = false) {
        if(root == nullptr) return 0;
        if(isLeaf(root) && left) 
        { 
            return root->val + sumOfLeftLeaves(root->right) + sumOfLeftLeaves(root->left, true);
        }
        
        return sumOfLeftLeaves(root->right) + sumOfLeftLeaves(root->left, true);
    }
};