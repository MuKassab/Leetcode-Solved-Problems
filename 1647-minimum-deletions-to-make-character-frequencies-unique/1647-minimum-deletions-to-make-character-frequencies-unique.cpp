class Solution {
public:
    int minDeletions(string s) {
        int freq[32] = {};
        for(auto ch : s)
            ++freq[ch - 'a'];
        vector<int> v;
        //cout << "HI" << endl;
        for(int i = 0; i < 32; i++)
            if(freq[i]) v.push_back(freq[i]);
        //cout << "HI" << endl;
        int sz = v.size(), ans = 0;
        //cout << "HI" << endl;
        for(int i = 0; i < (int) s.length() + 50; i++)
        {
            //cout << "HI" << endl;
            sort(v.begin(), v.end());
            for(int j = sz - 2; j >= 0; j--)
            {
                //cout << j << endl;
                if(v[j] == v[j+1] && v[j])
                {
                    ++ans;
                    --v[j];
                    break;
                }
            }
            //cout << "OUT" << i << endl;
        }
        return ans;
    }
};