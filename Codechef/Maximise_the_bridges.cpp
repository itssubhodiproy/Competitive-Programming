#include <bits/stdc++.h>
using namespace std;
#define ll long long int
                                                //Getting edgecases//
int main()
{
    ll t;cin>>t;
    while (t--)
    {
        ll n,m;cin>>n>>m;
        
        if (n==m)
        {
            if(m==(n*(n-1)/2)){
                for (ll i = 1; i <= m; i++)
                {
                    if (i==m)
                    {
                        cout<<i<<" "<<'1'<<endl;
                        continue;
                    }
                    
                    cout<<i<<" "<<i+1<<endl;
                }
                
            }
            else{
                for (ll i = 1; i <= m; i++)
                {
                    if (i==m)
                    {
                        cout<<'1'<<" "<<'3'<<endl;
                        continue;
                    }  
                    cout<<i<<" "<<i+1<<endl;
                }
                
            }
            
        }
        else if(m==n-1)
        {
            for (ll i = 1; i <= m; i++)
            {
                cout<<i<<" "<<i+1<<endl;  
            }
        }
        else if(m>n)
        {
            // for (ll i = 1; i < n; i++)
            // {
            //     cout<<i<<" "<<i+1<<endl;  
            // }
            int j=1;
            int ans=2;
            while (m--)
            {
                // if(k+1==n){
                //     a++;k=3;
                // }
                if(ans==n+1){
                    j++;
                    ans=j+1;
                }
                cout<<j<<" "<<ans<<endl;
                ans++;  
            }
            
        }
        
        

    }
    return 0;
}