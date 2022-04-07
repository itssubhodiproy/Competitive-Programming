#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n=0;
        for(auto it: s){
        if(it=='a'|| it=='e'|| it=='i'||it=='o'||it=='u'|| it=='A'||it=='E'|| it=='I'|| it=='O'|| it=='U'){
            n++;
        }
    }
    cout<<s<<" "<<n<<"\n";
        
        
    }
    return 0;
}
