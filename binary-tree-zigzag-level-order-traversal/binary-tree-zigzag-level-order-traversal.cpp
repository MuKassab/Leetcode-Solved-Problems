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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int lv = 0;
        vector< vector<int> > ans;
        if(root == NULL) return ans;
        vector<int> tmp;
        queue<TreeNode*> qu;
        qu.push(root);
        int sz = 1;
        int tmpSz = 0;
        while(!qu.empty())
        {
            TreeNode* curr = qu.front();
            qu.pop();
            tmp.push_back(curr->val);
            --sz;
            if(curr->left != NULL)
            {
                ++tmpSz;
                qu.push(curr->left);
            }
            if(curr->right != NULL)
            {
                ++tmpSz;
                qu.push(curr->right);
            }
            if(!sz)
            {  
                if(lv&1 == 1) reverse(tmp.begin(), tmp.end());
                ans.push_back(tmp);
                sz = tmpSz;
                tmpSz = 0;
                tmp.clear();
                ++lv;
            }
        }
        return ans;
    }
};