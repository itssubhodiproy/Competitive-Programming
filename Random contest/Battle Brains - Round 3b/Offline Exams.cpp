#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        
        int count=0,d=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                d=0;
            }
            else if(s[i]=='0'){
                d++;
            }
            if(d==k){
                d=0;count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
