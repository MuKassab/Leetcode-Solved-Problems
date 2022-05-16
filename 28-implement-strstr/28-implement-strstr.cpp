class Solution {
public:
    int strStr(string haystack, string needle) {
        int ln = haystack.length(), ln2 = needle.length();
        if(ln2 == 0) return 0;
        for(int i = 0; i <=ln - ln2; i++)
        {
            bool found = true;
            for(int j = 0; j < ln2; j++)
            {
                if(haystack[i + j] == needle[j]) continue;
                found = false;
                break;
            }
            if(found) return i;
        }
        return -1;
    }
};