#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
    ll n;ll i;
	cin >> n;
	string s;
	cin >> s;
	string ans = "";
	if(n==1){   // First case
	    ans += s[0];
	    ans += s[0];
	}
	else if(s[0]==s[1]){  // seccond case
	    ans += s[0];
	    ans += s[0];
	} else{              // Third case
	    
	    for(i = 0; i < n-1; i++){
	        if(s[i]<s[i+1])
	            break;
	    }
        // containing the largest substring where the sub-string is decreasing
	    string rem = s.substr(0,i+1);  
	    ans += rem;
        reverse(rem.begin(),rem.end());
	    ans += rem;
	}
	cout << ans << endl;
        
        
    }
    return 0;
}