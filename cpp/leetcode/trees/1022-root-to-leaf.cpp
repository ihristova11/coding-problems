// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/

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
    bool isLeaf(TreeNode* root)
    {
        return root->left == nullptr && root->right == nullptr;
    }
    
    int rootToLeaf = 0;
    
    int util(TreeNode* root, int sum)
    {
        if(root != nullptr) {    
            sum = (sum << 1) | root->val;
            if(isLeaf(root))
            {
                rootToLeaf += sum;
            }
            util(root->left, sum);
            util(root->right, sum);
        }
        
        return sum;
    }
    
    int sumRootToLeaf(TreeNode* root) {     
        util(root, 0);
        return rootToLeaf;
    }
};