/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
       return helper(root, NULL, NULL);
    }
    
    bool helper(TreeNode* root, TreeNode* l, TreeNode* r)
    {
        if(root == NULL)
            return 1;
        
        if(l != NULL && root->val <= l->val)
            return 0;
        
        if(r != NULL && root->val >= r->val)
            return 0;
        
        return helper(root->left, l, root) && helper(root->right, root, r);
    }
};