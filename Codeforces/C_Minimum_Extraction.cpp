#include <bits/stdc++.h>
using namespace std;
//                                                         <<<---Have some edgecases---->>>>

int main(){
    int t;cin>>t;
while (t--)
{
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if (n==1)
    {
        cout<<arr[0]<<endl;
        continue;
    }
     if (n==2)
    {
        cout<<min(arr[0],arr[1])<<endl;
        continue;
    } 
  
    sort(arr,arr+n);

    int maxi = INT_MIN;
    int diff;
    for (int i = n-1; i > 0; i--)
    {
        diff=arr[i]-arr[i-1];
        maxi=max(maxi,diff);
    }
    cout<<maxi<<endl;
    
}

}
