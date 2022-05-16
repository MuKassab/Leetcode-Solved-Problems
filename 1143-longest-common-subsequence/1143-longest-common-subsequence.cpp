class Solution {
public:
    
    int mem[1001][1001];
    int fz, sz; 
    string a, b;
    int lcs(int i = 0, int j = 0)
    {
        if(i == fz) return 0;
        if(j == sz) return 0;
        
        int &ret = mem[i][j];
        if(~ret) return ret;
        
        if(a[i] == b[j])
            ret = lcs(i+1, j+1) + 1;
        else
            ret = max(lcs(i+1, j), lcs(i, j+1));
        return ret;
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        memset(mem, -1, sizeof(mem));
        fz = text1.length();
        sz = text2.length();
        a = text1, b = text2;
        return lcs();
    }
};