#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while (t--)
{
    long long int x,y;cin>>x>>y;
    int count=0;
    // long long int diff=y-x;
    // if(diff%2==0){
    //     cout<<diff/2<<endl;
    // }
    // else
    // {
    //     cout<<(diff/2)+2<<endl;
    // }
    while (x!=y)
    {
        if (x<y)
        {
            x=x+2;
            count++;
        }
        if (x>y)
        {
            x=x-1;
            count++;
        }
        
    }
    
cout<<count<<endl;

}

    return 0;
}