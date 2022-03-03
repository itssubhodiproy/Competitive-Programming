#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m, source;
        cin >> n >> m;
        vector<pair<int, int>> g[n + 1]; // 1-indexed adjacency list for of graph

        int a, b, wt;
        vector<int> vis(n + 1, 0);
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            a--;
            b--;
            g[a].push_back(make_pair(b, 0));
            g[b].push_back(make_pair(a, 0));
            if (abs(b - a) == 1)
            {
                vis[min(a, b)] = 1;
            }
        }
        for (int i = 0; i < n - 1; ++i)
        {
            if (!vis[i])
            {
                vis[i] = 1;
                g[i].push_back(make_pair(i + 1, 1));
                g[i + 1].push_back(make_pair(i, 1));
            }
        }
        

        // Dijkstra's algorithm begins from here
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // min-heap ; In pair => (dist,from)
        vector<int> distTo(n + 1, INT_MAX);                                                 // 1-indexed array for calculating shortest paths;

        distTo[0] = 0;
        pq.push(make_pair(0, 0)); // (dist,from)

        while (!pq.empty())
        {
            int dist = pq.top().first;
            int prev = pq.top().second;
            pq.pop();

            vector<pair<int, int>>::iterator it;
            for (it = g[prev].begin(); it != g[prev].end(); it++)
            {
                int next = it->first;
                int nextDist = it->second;
                if (distTo[next] > distTo[prev] + nextDist)
                {
                    distTo[next] = distTo[prev] + nextDist;
                    pq.push(make_pair(distTo[next], next));
                }
            }
        }

        // string s1;
        // cin>>s1;

        cout << distTo[n-1] << "\n";
    }
    return 0;
}
