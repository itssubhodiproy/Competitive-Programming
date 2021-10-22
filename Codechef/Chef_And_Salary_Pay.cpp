#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while (t--)
{
int x,y;cin>>x>>y;    
string s;cin>>s;
int count=0;int maximum=0;
for (int i = 0; i < s.length(); i++)
{
    if (s[i]=='1')
    {
        int length=0;int j=i;
        while (s[j]!='0')
        {
            length++;
        }
        maximum=max(maximum,length);
        count++;
    }
}
cout<<x*count+maximum*y<<endl;
}
  return 0;
}
