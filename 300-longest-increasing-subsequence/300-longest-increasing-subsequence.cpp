class Solution {
public:
    int mem[2501][2501];
    int arr[2501];
    int sz;
    
    int lis(int i, int prev)
    {
        if(i >= sz) return 0;
        
        int &ret = mem[i][prev];
        if(~ret) return ret;
        
        ret = lis(i+1, prev);
        if(arr[i] > arr[prev])
            ret = max(ret, lis(i+1, i) + 1);
        return ret;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        memset(mem, -1, sizeof(mem));
        sz = nums.size();
        for(int i = 0; i < sz; i++)
            arr[i] = nums[i];
        int ans = 0;
        for(int i = 0; i < sz; i++)
        {
            ans = max(ans, lis(i+1, i)+1);
            //cout << i << " - " << ans << endl;
        }
        return ans;
    }
};