
#include <bits/stdc++.h>
using namespace std;
// declare the adjacent matrix
// vector<int> adj[n + 1];

// // take edges as input
// for (int i = 0; i < m; i++)
// {
//     int u, v;
//     cin >> u >> v;
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }
// vector<int> weights;
// for (int i = 0; i < n; i++)
// {
//     int num;
//     cin >> num;
//     weights.push_back(num);
// }
// sort(weights.begin(), weights.end());

// map<pair<int,int>, vector<int> > m;

// printGraph(adj,n);
int main()
{
    int v, e;
    cin >> v >> e;
    // take edges as input
    map<int, int> m;
    unordered_multiset<int> s;
    for (int i = 0; i < e; i++)
    {
        int u, u1;
        cin >> u >> u1;
        s.insert(u);
        s.insert(u1);
    }
    vector<int> weights;
    for (int i = 0; i < v; i++)
    {
        int num;
        cin >> num;
        weights.push_back(num);
    }
    // sorting weights
    sort(weights.rbegin(), weights.rend());
    //

    for (int i = 1; i <= v; i++)
    {
        m[i] = s.count(i);
    }

    vector<pair<int, int>> vec;
    for (auto it : m)
    {
        // cout << it.first << " " << it.second << "\n";
        vec.push_back(make_pair(it.second, it.first));
    }
    sort(vec.rbegin(), vec.rend());
    int i = 0;
    for (auto &it : vec)
    {
        it.second = weights[i];
        i++;
    }
    int sum = 0;
    for (auto it : vec)
    {
        sum += (it.second * it.first);
    }
    cout << sum << "\n";

    return 0;
}
