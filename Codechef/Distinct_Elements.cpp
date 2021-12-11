#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mii map<int, int>
#define pii pair<int, int>
#define vi vector<ll>

const int N = 1e9 + 7;

// inline int powerpower(int a, int b)
// {
//     int x = 1;
//     while (b)
//     {
//         if (b & 1)
//             x *= a;
//         a *= a;
//         b >>= 1;
//     }
//     return x;
// }

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
    ll n;
	cin >> n;
	vi a(n);
	for(ll & i: a)
	    cin >> i;
	mii freq;
	ll ans = 1;
	for(ll i : a){
	    freq[i]++;
	}
	for(auto piii : freq){
	    ll f = piii.second;
	    ans *= (f+1);
	    ans %= N;
	}
	ans--;
	cout << ans << "\n";
    }

    return 0;
}