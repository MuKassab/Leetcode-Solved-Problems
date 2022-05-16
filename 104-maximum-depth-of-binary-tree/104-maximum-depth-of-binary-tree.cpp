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
    int maxDepth(TreeNode* root) {
        queue< pair<TreeNode*, int> > qu;
        if(root == NULL) return 0;
        qu.push({root, 1});
        int maxi = 0;
        while(!qu.empty())
        {
            TreeNode* temp = qu.front().first;
            int x = qu.front().second;
            qu.pop();
            maxi = max(maxi, x);
            if(temp->left != NULL) qu.push({temp->left, x + 1});
            if(temp->right != NULL) qu.push({temp->right, x+1});
        }
        return maxi;
    }
};