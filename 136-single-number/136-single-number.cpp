class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int freq[60010] = {};
        for(auto i : nums)
            ++freq[i + 30000];
        for(int i = 0; i < 60001; i++)
            if(freq[i] == 1) return i - 30000;
        return 0;
    }
};