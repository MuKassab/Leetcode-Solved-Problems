class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m - 1, j = n - 1, id = m + n - 1; ; --id)
        {
            if(i == -1 && j == -1) break;
            if(i == -1)
                nums1[id] = nums2[j--];
            else if(j == -1)
                nums1[id] = nums1[i--];
            else if(nums1[i] >= nums2[j])
                nums1[id] = nums1[i--];
            else
                nums1[id] = nums2[j--];
                
        }
    }
};