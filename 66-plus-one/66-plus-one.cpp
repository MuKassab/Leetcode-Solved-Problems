class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int ex = 1;
        for(int i = n - 1; i >= 0; i--)
        {
            if(digits[i] + ex == 10)
                digits[i] = 0;
            else {digits[i] += ex, ex = min(ex, 0);}
        }
        if(ex) digits.insert(digits.begin(), 1);
        return digits;
    }
};