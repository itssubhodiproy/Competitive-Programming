#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;int count=0;

        for (int i = 0; i < n ; i++)
        {
            for (int j = i+1; j <= min(n-1,i+9); j++) //////note : if n=15, then for i=0 the difference become 15 which is greater than 9 . 
        {                                             ///////      for this case j-i = 15 but it shoudn't be greater than 9 that's why s[j]-s[i] != j-i;
           if (j-i==abs(s[j]-s[i]))
           {
               count++;
           }
        }
        }
        cout<<count<<endl;
        
        
        
        
    }
    


    return 0;
}