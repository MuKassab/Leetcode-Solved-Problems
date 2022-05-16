class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0, maxi = 0;
        for(auto i : nums){
            if(!i){
                maxi = max(maxi, curr);
                curr = 0;
                continue;
            }
            ++curr;
            maxi = max(maxi, curr);
        }
        return maxi;
    }
};