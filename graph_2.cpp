    void dfs(vector<int> g[], int n, int start, vector<int>&v, vector<bool>&vis)
    {
        v.push_back(start);
        vis[start]=true;
        for(auto x:g[start])
        {
            if(!vis[x])
            {
                dfs(g,n,x,v,vis);
            }
        }
    }
    
    
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
        int start=0;
        vector<int>v;
        vector<bool>vis(V,false);
        dfs(adj,V,start,v,vis);
        return v;
	}
};
