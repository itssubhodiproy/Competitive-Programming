class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int>s;
        for(auto it:  nums){
            s.insert(it);
        }
        int num=original;
        while(s.count(num)!=0){
            num*=2;
        }
        return num;
        
    }
};
