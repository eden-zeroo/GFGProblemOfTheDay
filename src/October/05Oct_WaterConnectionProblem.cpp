class Solution
{
    public:
    void DFS(int src, vector<bool> &vis, int &minW, int &last, vector<vector< pair<int, int> > > &adj)
    {
        vis[src] = 1;
        last = src;
        for(auto x : adj[src])
        {
            if(!vis[x.first])
            {
                minW = min(minW, x.second);
                DFS(x.first, vis, minW, last, adj);
            }
        }
    }
    vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
    {
        // code here
        vector<vector< pair<int, int> > > adj(n + 1);
        vector<bool> incoming(n + 1, false);
        for(int i = 0; i < p; i++)
        {
            adj[a[i]].push_back({b[i], d[i]});
            incoming[b[i]] = 1;
        }
        vector<bool> vis(n + 1, false);
        int last, minW;
        vector< vector<int> > res;
        for(int i = 1; i <= n; i++)
        {
            if(!incoming[i])
            {
                last = i;
                minW = INT_MAX;
                DFS(i, vis, minW, last, adj);
                if(last != i)
                    res.push_back({i, last, minW});
            }
        }
        return res;
    }
};