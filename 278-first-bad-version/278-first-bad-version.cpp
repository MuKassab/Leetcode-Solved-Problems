// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, h = n, mid, prevMid = - 1;
        while(l < h)
        {
            mid = l + (h - l)/2;
            if(mid == prevMid) ++mid;
            prevMid = mid;
            if(isBadVersion(mid))
                h = mid;
            else
                l = mid + 1;
        }
        return l;
    }
};