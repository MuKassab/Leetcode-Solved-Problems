class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        for(int i = 0, j = n - 1; i < j; )
        {
            //cout << i << " " << j << endl;
            if(!isalnum(s[i])) ++i;
            else if(!isalnum(s[j])) --j;
            else if(tolower(s[i]) != tolower(s[j])) return false;
            else if(tolower(s[i]) == tolower(s[j])) ++i, j--;
        }
        return true;
    }
};