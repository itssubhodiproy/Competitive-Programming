class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> v;
        
        for(int i=s[0];i<=s[3];i++){
            string s1="";
        for(int j=s[1];j<=s[4];j++){
            s1.push_back((char)i);
            s1.push_back((char)j);
            v.push_back(s1);
            s1.clear();
        }
            
            // s1.clear();
        }
        
        return v;
    }
};
