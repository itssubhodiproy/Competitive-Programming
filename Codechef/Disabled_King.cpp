#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if(n%2==0){
            cout<<n<<"\n";
        }
        else{
            cout<<n-1<<"\n";
        }
    }
    return 0;
}