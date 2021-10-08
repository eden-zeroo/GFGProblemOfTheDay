class Solution
{
    public:
    int maxFrequency(string s)
    {
    	// code here
    	int n = s.size(), mn = n + 1, ans = 1, z[n] = {};
        for (int i = 1, l = 0, r = 0; i < n; i++) {
            if (i <= r)
                z[i] = min(r - i + 1, z[i - l]);
            while (i + z[i] < n && s[z[i]] == s[i + z[i]])
                z[i]++;
            if (i + z[i] - 1 > r)
            {
                l = i;
                r = i + z[i] - 1;
            }
            if (z[i] && z[i] + i == n)
                mn = min(mn, z[i]);
        }
        for (int i = 1; i < n; i++)
        {
            if (z[i] >= mn)
                ans++;
        }
        return ans;
    }
};