#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll n;
    cin >> n;
    
    queue<ll> v;
    // vector<ll> v;
    ll i = 1;
    ll last = n;
    
    while (v.size() != n)
    {
        if ( (n%2!=0) && (v.size() + 1 == n))
        {
            v.push(i);
            continue;
        }
        v.push(i);
        i++;
        v.push(last);
        last--;
    }
    while (!v.empty())
    {
        cout << v.front() << " ";
        v.pop();
    }
    // for (auto it : v)
    // {
    //     cout<<it<<" ";
    // }

    cout << "\n";
}
