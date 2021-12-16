#include<bits/stdc++.h>
using namespace std;

bool check(int arr[],int n){
    for (int i = 0; i <n ; i++)
    {

        if (arr[i]==0)
        {
            return false;
        }
        
    }
    return true;
    
}

bool check2(int arr[], int m){
for (int i = 0; i <m; i++)
{
    if (arr[i]==0)
    {
        return false;
    }
    
}
return true;
}




int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,m,k;cin>>n>>m>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if (check(arr,n))
        {
            cout<<"100"<<endl;
        }
        else{
            if(check2(arr,m)){
                cout<<k<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
        
        
        
    }
    


    return 0;
}
