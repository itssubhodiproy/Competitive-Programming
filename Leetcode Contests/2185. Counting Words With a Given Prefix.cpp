bool check(string s1,string s2){
    for(int i=0;i<s2.length();++i){
        if(s2[i]!=s1[i]){
            return false;
        }
    }
    return true;
}

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        
        int count=0;
        
        for(int i=0;i<words.size();++i){
            if(check(words[i],pref)){
                count++;
            }
        }
        return count;
    }
};
