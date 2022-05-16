class Solution {
public:
    int firstUniqChar(string s) {
        int freq[30] = {};
        for(int i = 0; i < (int)s.length(); i++)
        {
            if(!freq[ s[i] - 'a' ]) freq[ s[i] - 'a'] = i + 1;
            else freq[ s[i] - 'a' ] = -1;
        }
        int mini = 1e6;
        for(int i = 0; i < 30; i++)
        {
            if(!freq[i] || freq[i] == -1) continue;
            mini = min(mini, freq[i]);
        }
        if(mini == 1e6) return -1;
        else return mini - 1;
    }
};