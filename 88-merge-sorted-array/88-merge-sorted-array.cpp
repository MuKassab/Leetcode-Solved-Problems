class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int id = m + n - 1;
        --m;
        --n;
        while(1)
        {
            if(m == -1 && n == -1) break;
            if(m == -1)
                nums1[id--] = nums2[n--];
            else if(n == -1)
                nums1[id--] = nums1[m--];
            else if(nums1[m] >= nums2[n])
                nums1[id--] = nums1[m--];
            else
                nums1[id--] = nums2[n--];
                
        }
    }
};