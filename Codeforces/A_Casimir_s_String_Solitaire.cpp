#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        string word="";
        for (int i = 0; i < s.length(); i++)
        {
            word+="1";
        }
        // cout<<word<<endl;


        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]=='A')
            {
                for (int j = 0; j < s.length(); j++)
                {
                    if (s[j]=='B')
                    {
                        s[i]='1';s[j]='1';
                        break;
                    }  
                }
                
            }
            if (s[i]=='B')
            {
                for (int j = 0; j < s.length(); j++)
                {
                    if (s[j]=='C')
                    {
                        s[i]='1';s[j]='1';
                        break;
                    }  
                }
                
            }
            
        }
        if (s==word)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
    }
    


    return 0;
}