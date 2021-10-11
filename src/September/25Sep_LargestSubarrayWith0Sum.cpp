class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        map<int, int> mp;
        mp[0] = -1;
        int sum = 0, maxl = 0;
        for(int i = 0; i < n; i++)
        {
            sum += A[i];
            if(mp.find(sum) != mp.end())
                maxl = max(maxl, i - mp[sum]);
            else
                mp[sum] = i;
        }
        return maxl;
    }
};
