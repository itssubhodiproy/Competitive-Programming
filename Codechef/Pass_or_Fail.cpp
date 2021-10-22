#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while (t--)
{
int n,x,p;cin>>n>>x>>p;
int correct=x*3;int wrong= (n-x)*(-1);
int marks=correct+wrong;
if (marks>=p)
{
    cout<<"PASS"<<endl;
}
else{
    cout<<"FAIL"<<endl;
}
}
  return 0;
}