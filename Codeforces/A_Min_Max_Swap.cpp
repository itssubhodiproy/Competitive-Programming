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
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>arr2[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(arr1[i]>arr2[i]){
                swap(arr1[i],arr2[i]);
            }
        }
        int maxi1=0;
        int maxi2=0;

        for (int i = 0; i < n; i++)
        {
            maxi1=max(maxi1,arr1[i]);
            maxi2=max(maxi2,arr2[i]);
        }
        cout<<maxi1*maxi2<<"\n";
        
    }
    return 0;
}
