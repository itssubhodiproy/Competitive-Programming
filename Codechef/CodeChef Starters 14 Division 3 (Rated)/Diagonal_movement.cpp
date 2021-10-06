#include<bits/stdc++.h>
using namespace std;




int main(){
    int t;cin>>t;
    while (t--)
    {
    int i,j;
    cin>>i>>j;
    if (i<0)
    {
        i*=-1;
    }
    if (j<0)
    {
        j*=-1;
    }
    if ((i+j)%2==0)
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