class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        // code here
        vector<int> prefix(n + 1), res(q);
        prefix[0] = 0;
        for(int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + arr[i];
            //cout << prefix[i + 1] << " " ;
        }
        for(int i = 0; i < 2 * q; i += 2)
        {
            res[i / 2] =  prefix[queries[i + 1]] - prefix[queries[i] - 1];
        }
        return res;
    }
};