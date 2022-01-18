#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        cout<<s<<'\n';
    }
    return 0;
}
