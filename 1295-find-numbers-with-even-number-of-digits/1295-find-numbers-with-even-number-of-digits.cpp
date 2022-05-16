class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(auto i : nums)
        {
            int l = 0;
            while(i)
            {
                i /= 10;
                ++l;
            }
            if(l&1) continue;
            ++ans;
        }
        return ans;
    }
};