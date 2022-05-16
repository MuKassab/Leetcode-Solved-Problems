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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector< vector<int> > ans;
        vector<int> v;
        queue<TreeNode*> temp;
        temp.push(root);
        int cnt = 1, tmp = 0;
        if(root == NULL) return ans;
        while(!temp.empty())
        {
            --cnt;
            auto it = temp.front();
            temp.pop();
            v.push_back(it->val);
            if(it->left != NULL)
            {
                ++tmp;
                temp.push(it->left);
            }
            if(it->right != NULL)
            {
                ++tmp;
                temp.push(it->right);
            }
            if(!cnt)
            {
                cnt = tmp;
                tmp = 0;
                ans.push_back(v);
                v.clear();
            }
        }
        
        
        return ans;
    }
};