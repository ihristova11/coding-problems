// https://leetcode.com/problems/subtree-of-another-tree/

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
    bool equal(TreeNode* s, TreeNode* t)
    {
        if(s == nullptr && t == nullptr) return true;
        if(s == nullptr || t == nullptr) return false;
        
        return (s->val == t->val) 
            && equal(s->left, t->left)
            && equal(s->right, t->right);
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s == nullptr && t != nullptr) return false;
        if(equal(s, t)) return true;
        
        return (isSubtree(s->left, t) || isSubtree(s->right, t));
    }
};