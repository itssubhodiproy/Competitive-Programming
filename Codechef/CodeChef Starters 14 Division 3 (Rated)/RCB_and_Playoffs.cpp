#include<bits/stdc++.h>
using namespace std;




int main(){
    int t;cin>>t;
    while (t--)
    {
    int x,y,z;
    cin>>x>>y>>z;
    int need= y-x;
    if (need<=z*2 || need<=z*1 )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}