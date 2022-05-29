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
    vector<int> ans;
    vector<int> inorderTraversal(TreeNode* root) {
        traverseInorder(root);
        return ans;
    }
    
    void traverseInorder(TreeNode* root)
    {
        if(root == NULL) return;
        traverseInorder(root->left);
        ans.push_back(root->val);
        traverseInorder(root->right);
    }
    
};