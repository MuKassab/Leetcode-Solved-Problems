class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int sz = strs.size();
        if(sz == 1) return strs[0];
        string common = "";
        int mini = 1e6;
        for(int i = 1; i < sz; i++)
        {
            string cmn = "";
            for(int j = 0; j < strs[i].length(); j++)
            {
                if(strs[0][j] == strs[i][j]) cmn += strs[i][j];
                else break;
            }
            if(cmn.length() < mini)
            {
                mini = cmn.length();
                common = cmn;
            }
        }
        return common;
    }
};