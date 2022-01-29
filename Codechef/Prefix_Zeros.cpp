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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;int count=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0'){
                count++;continue;
            }
            if(k < (10-(s[i]-'0'))){
                break;
            }   
            k-=(10-(s[i]-'0'));
            count++;
        }
        
        cout<<count<<"\n";
        
    }
    return 0;
}
