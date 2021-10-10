class Solution{

	public:
	int findK(vector<vector<int>> &matrix, int m, int n, int ind)
    {
        // Your code goes here
        vector<int> res;
        int k = 0, l = 0;
        while(k < m && l < n)
        {
            for(int i = l; i < n; i++)
                res.push_back(matrix[k][i]);
            k++;
            
            for(int i = k; i < m; i++)
                res.push_back(matrix[i][n - 1]);
            n--;
            
            if(k < m)
            {
                for(int i = n - 1; i >= l; i--)
                    res.push_back(matrix[m - 1][i]);
                m--;
            }
            
            if(l < n)
            {
                for(int i = m - 1; i >= k; i--)
                    res.push_back(matrix[i][l]);
                l++;
            }            
        }
        return res[ind - 1];
    }

};