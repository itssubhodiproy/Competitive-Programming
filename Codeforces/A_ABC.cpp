/*
NAME: SUBHODIP ROY
BRANCH: COMPUTER SCIENCE AND ENGINEERING
COLLEGE: NETAJI SUBHASH ENGINEERING COLLEGE
GITHUB: subh-23
CODEFORCES: subh_23
CODECHEF: subh_23
GRADUATION YEAR: 2024
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define dd double

// put function




int32_t main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int count1=0;int count2=0;
        for(auto it: s){
            if(it=='1'){
                count1++;
            }
            else if(it=='0'){
                count2++;
            }
        }
        if(count1>1||count2>1){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}
