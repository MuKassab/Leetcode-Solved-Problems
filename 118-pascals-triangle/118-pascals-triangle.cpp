class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int> > ans;
        vector<int> r;
        r.push_back(1);
        ans.push_back(r);
        if(numRows == 1) return ans;
        r.push_back(1);
        ans.push_back(r);
        for(int i = 3; i <= numRows; i++)
        {
            r.clear();
            r.push_back(1);
            for(int j = 0; j < ans[i - 2].size() - 1; j++)
                r.push_back(ans[i-2][j] + ans[i-2][j+1]);
            r.push_back(1);
            ans.push_back(r);
            //cout << "HA" << endl;
        }
        return ans;
    }
};