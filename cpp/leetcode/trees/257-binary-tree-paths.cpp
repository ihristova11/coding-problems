// https://leetcode.com/problems/binary-tree-paths/
#include <vector>
#include <string>
using namespace std;
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
    void util(TreeNode* root, vector<string>& path, string res)
    {
        if(root == nullptr) return;
        
        res += (to_string(root->val));
        
        if(root->left == nullptr && root->right == nullptr) 
        {
            path.push_back(res);
            res = "";
        }
        else
        {
            res += "->";
        }
        util(root->left, path, res);
        util(root->right, path, res);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res = {};
        util(root, res, "");
        return res;
    }
};