class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int mp[100010] = {};
        for(auto i : nums)
        {
            ++mp[i];
            if(mp[i] == 2) return i;
        }
        return -1;
    }
};