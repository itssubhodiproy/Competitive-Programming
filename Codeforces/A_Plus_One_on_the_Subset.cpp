#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
    ll n;cin>>n;
    vector<ll>v;
    for( ll i=0;i<n;i++){
        ll num;
        cin>>num;
        v.push_back(num);
    }
    ll mini=INT_MAX;ll maxi=INT_MIN;
    for(auto it: v){
        mini=min(it,mini);
        maxi=max(it,maxi);
    }
    cout<<(maxi-mini)<<'\n';
    
    }
    return 0;
}
