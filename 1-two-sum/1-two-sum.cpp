class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> ans;
        int sz = nums.size();
        for(int i = 0; i < sz; i++)
            mp[ nums[i] ] = i+1;
        for(int i = 0; i < sz; i++)
        {
            int sr = target - nums[i];
            if(!mp[ sr ]) continue;
            if(sr != nums[i])
            {
                //cout << "CASE1" << endl;
                ans.push_back(i);
                ans.push_back( mp[sr] - 1);
                break;
            }
            else if(mp[sr] - 1 != i )
            {
                //cout << "CASE2" << endl;
                ans.push_back(i);
                ans.push_back( mp[sr] - 1 );
                break;
            }
        }
        return ans;
    }
};