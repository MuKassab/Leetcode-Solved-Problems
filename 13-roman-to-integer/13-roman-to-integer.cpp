class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int ln = s.length();
        map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        for(int i = ln - 1; i >= 0; )
        {
            if(i == 0) 
            {
                ans += mp[s[i--]];
                break;
            }
            else 
            {
                if(s[i] == 'I')
                    ans += mp[s[i--]];
                else if(s[i] == 'V' || s[i] == 'X')
                {
                    if(s[i-1] == 'I')
                    {
                        ans += mp[s[i]];
                        ans -= 1;
                        i -= 2;
                    }
                    else
                        ans += mp[s[i--]];
                }
                else if(s[i] == 'L' || s[i] == 'C')
                {
                    if(s[i-1] == 'X')
                    {
                        ans += mp[s[i]];
                        ans -= 10;
                        i -= 2;
                    }
                    else
                        ans += mp[s[i--]];
                }
                else 
                {
                    if(s[i-1] == 'C')
                    {
                        ans += mp[s[i]];
                        ans -= 100;
                        i -= 2;
                    }
                    else
                        ans += mp[s[i--]];
                }
            }
        }
        return ans;
    }
};