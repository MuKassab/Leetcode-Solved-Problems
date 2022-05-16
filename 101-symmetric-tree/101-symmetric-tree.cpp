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
    bool isSymmetric(TreeNode* root) {
        vector<TreeNode*> v, temp;
        v.push_back(root);
        int sz = 1, newSz;
        while(!v.empty())
        {
            newSz = 0;
            //check
            bool valid = 1;
            temp.clear();
            for(int i = 0, j = sz - 1; i < j && valid; i++, j--)
            {
                if(v[i] == NULL && v[j] != NULL) valid = 0;
                if(v[j] == NULL && v[i] != NULL) valid = 0;
                if(v[i] == NULL || v[j] == NULL) continue;
                if(v[i]->val != v[j]->val) valid = 0;
            }
            if(!valid) return false;
            
            //bfs
            for(int i = 0; i < sz; i++)
            {
                if(v[i] == NULL) continue;
                newSz += 2;
                temp.push_back(v[i]->left);
                temp.push_back(v[i]->right);
            }
            sz = newSz;
            v = temp;
        }
        
        return true;
    }
};