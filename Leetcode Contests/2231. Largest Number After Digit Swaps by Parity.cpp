class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        string even,odd;
        for(auto it: s){
            if((it-'0')%2==0){
                even.push_back(it);
            }
            else{
                odd.push_back(it);    
            }
        }
        
        //
        sort(even.begin(),even.end(),greater<int>());
        sort(odd.begin(),odd.end(),greater<int>());
        int i=0,j=0;
        
        for(auto &it: s){
            if((it-'0')%2==0){
                it=even[i];
                i++;
            }
            else{
                it=odd[j];
                j++;
            }
        }
        return stoi(s);
        
    }
};
