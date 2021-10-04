/*
Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not.
*/
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool detectCycle(int src, vector<bool> &vis, vector<int> adj[], int parent)
    {
        vis[src] = true;
        //cout << src << " - ";
        for(int v : adj[src])
        {
            //cout << v << " ";
            if((!vis[v]))
            {
                if(detectCycle(v, vis, adj, src))
                    return true;
            }
            else if(vis[v] && v != parent)
                return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> vis(V, 0);
        for(int i = 0; i < V; i++)
        {
            if(!vis[i] && detectCycle(i, vis, adj, -1))
            {
                return true;
            }
        }
        return false;
    }
};