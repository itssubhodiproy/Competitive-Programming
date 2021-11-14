#include<bits/stdc++.h>
#include<unordered_map>
#include<climits>
#include<cstdlib>
using namespace std;
unordered_map<char,int> mp;
void solve(){
    mp.insert({'a',1}); mp.insert({'b',2});
    mp.insert({'c',3}); mp.insert({'d',4});
    mp.insert({'e',5}); mp.insert({'f',6});
    mp.insert({'g',7}); mp.insert({'h',8});
    mp.insert({'i',9}); mp.insert({'j',10});
    mp.insert({'k',11}); mp.insert({'l',12});
    mp.insert({'m',13}); mp.insert({'n',14});
    mp.insert({'o',15}); mp.insert({'p',16});
    mp.insert({'q',17}); mp.insert({'r',18});
    mp.insert({'s',19}); mp.insert({'t',20});
    mp.insert({'u',21}); mp.insert({'v',22});
    mp.insert({'w',23}); mp.insert({'x',24});
    mp.insert({'y',25}); mp.insert({'z',26});
}

int main(){
    solve();
    int t;
    cin >> t;
    for(int d = 1; d <= t; d++) {
        string a,b;
        cin >> a >> b;
        int mini, ans = 0;
        vector<int> num;
        for(int i = 0; i < a.size(); i++){
            mini = INT_MAX;
            for(int j = 0; j < b.size(); j++){
                if(abs((mp[a[i]])-mp[b[j]])>13)
                    mini = min(mini,26-abs((mp[a[i]])-mp[b[j]]));
                else
                    mini = min(mini,abs((mp[a[i]])-mp[b[j]]));
            }
            ans += mini;
        }
        cout << "Case #" << (d) << ": " << ans << endl;
    }
    return 0;
}
