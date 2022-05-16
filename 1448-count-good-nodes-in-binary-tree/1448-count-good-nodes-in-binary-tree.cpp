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
    int goodNodes(TreeNode* root) {
        queue< pair<TreeNode*, int> > qu;
        qu.push({root, -1000000});
        int ans = 0;
        while(!qu.empty())
        {
            auto u = qu.front();
            qu.pop();
            if(u.first->val >= u.second) ++ans;
            int currMax = max(u.second, u.first->val);
            if(u.first->left != NULL) qu.push({u.first->left, currMax});
            if(u.first->right != NULL) qu.push({u.first->right, currMax});
        }
        return ans;
    }
};