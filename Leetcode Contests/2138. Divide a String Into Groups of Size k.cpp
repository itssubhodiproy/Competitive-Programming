class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        // set<char> st; //for repeating element
        int n=s.length(); // string length
        // for(int i=0;i<n;i++){ // pushing all elements to my set
        //     st.insert(s[i]);
        // }
        // s.clear();// clearing string for filling non-repeating elements and fills
        // for(auto it: st){
        //     s.push_back(it);
        // }
        while(s.length()%k!=0){  
            s.push_back(fill);
        }
        n=s.length(); string word="";
        vector<string> v;
        for(int i=0;i<n;i++){
            if(word.length()==k){
                v.push_back(word);
                word.clear();
            }
            word.push_back(s[i]);
        }
        v.push_back(word);// for the last word
        
        return v;
    }
};
