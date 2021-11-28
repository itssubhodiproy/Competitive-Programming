#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll m,n;
        cin>>m>>n;
        ll arr[n];
        
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll p1,p2; 
        while (m--)
        {
            ll sum=0;
            cin>>p1>>p2;
            p1--;p2--;
            for(ll i=p1;i<=p2;i++){
                sum+=arr[i];
            }
            cout<<sum<<"\n";
        }
        
    }

    return 0;
}