#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,m;
        cin>>m>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll count=0;
        for(ll i=n-1;i>=0;i--){
            for(ll j=i;j<n;j++){
                if(arr[i]<arr[j]){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }

}
