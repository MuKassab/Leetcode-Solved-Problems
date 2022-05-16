class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int c = 1;
        while(n > 1)
        {
            n -= 2;
            ans.push_back(c);
            ans.push_back(-1*c);
            ++c;
        }
        if(n) ans.push_back(0);
        return ans;
    }
};