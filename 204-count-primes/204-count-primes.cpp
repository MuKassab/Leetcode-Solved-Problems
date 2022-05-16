class Solution {
public:
    int arr[5000010];
    
    int countPrimes(int n) {
        return sieve(n);
    }
    
    int sieve(int n)
    {
        int cnt = 0;
        for(int i = 2; i < n; i++)
        {
            if(arr[i]) continue;
            ++cnt;
            for(int j = i*2; j <= n; j += i)
                arr[j] = i;
        }
        return cnt;
    }
};