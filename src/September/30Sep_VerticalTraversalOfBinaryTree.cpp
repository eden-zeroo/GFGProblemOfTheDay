class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    map<int, vector<int>> mp;
    void BFS(Node *root)
    {
        if(!root)
            return;
        queue< pair<Node*, int> > q;
        q.push(make_pair(root, 0));
        while(!q.empty())
        {
            auto x = q.front();
            q.pop();
            mp[x.second].push_back(x.first->data);
            if(x.first->left)
                q.push({x.first->left, x.second - 1});
            if(x.first->right)
                q.push({x.first->right, x.second + 1});
        }
    }
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int> res;
        BFS(root);
        for(auto &vec: mp)
        {
            for(auto x : vec.second)
                res.push_back(x);
        }
        return res;
    }
    
};