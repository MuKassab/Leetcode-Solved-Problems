class Solution {
public:
    vector<int> v, tmp;
    Solution(vector<int>& nums) {
        v = tmp = nums;
    }
    
    vector<int> reset() {
        v = tmp;
        return v;
    }
    
    vector<int> shuffle() {
        unsigned seed = 0;
        ::random_shuffle(v.begin(), v.end());
        return v;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */