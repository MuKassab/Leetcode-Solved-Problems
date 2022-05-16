class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp;
        if(s.length() != t.length()) return false;
        for(auto ch : s)
            ++mp[ch];
        for(auto ch : t)
            if(mp[ch]) --mp[ch];
            else return false;
        return true;
    }
};