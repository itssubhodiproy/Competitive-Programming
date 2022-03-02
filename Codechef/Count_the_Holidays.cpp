#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> &vis, vector<int> adj[])
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj);
        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        unordered_set<int> s;
        vector<int> adj[V];

        for (int i = 1; i <= E; i++)
        {
            int u, v;
            cin >> u >> v;
            s.insert(u);
            s.insert(v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        int count = 1;

        vector<int> vis(V + 1, 0);
        for (int i = 1; i <= V; i++)
        {
            if ((s.count(i) == 0))
            {
                count++;
            }
            else if (s.count(i) == 1 && !vis[i])
            {
                dfs(i, vis, adj);
                count++;
            }
        }
        cout << count << "\n";

        // for (int i = 0; i < ans.size(); i++)
        // {
        //     cout << ans[i] << " ";
        // }
        // cout << endl;
    }
    return 0;
}
