bool even(int n){
    if(n<=10){
        if(n==0 || n==10){
            return false;
        }
        if(n%2==0){
            return true;
        }
        return false;
    }
    
    int sum=0;
    string s=to_string(n);
    for(int i=0;i<s.length();i++){
        sum+=s[i]-'0';
    }
    if(sum%2==0){
        return true;
    }
    return false;
}



class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            if(even(i)){
                count++;
            }
        }
        return count;
    }
};
