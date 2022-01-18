#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n,k;
        cin>>n>>k;

        //when there is no space remain for kroks
        if(n%2==0){
            if(n<((k*2))){
                cout<<"-1"<<"\n";
                continue;
            }
        }
        if(n%2!=0){
            if(n<((k*2)-1)){
                cout<<"-1"<<"\n";
                continue;
            }
        }

        char arr[n][n];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(i%2==0 && j%2==0 && (i==j) && k>0){
                    arr[i][j]='R';k--;
                }
                else{
                    arr[i][j]='.';
                }
            }
        }

        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cout<<arr[i][j];
            }
            cout<<"\n";
        }


    }
    return 0;
}
