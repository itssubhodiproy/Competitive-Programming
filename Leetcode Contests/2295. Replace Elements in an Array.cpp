class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        map<int,int>m;int i=0;
        for(auto it: nums){
            m[it]=i;i++;
        }
        //for operations
        for(auto it: operations){
            int newval=it[1],oldval=it[0];
            int ind=m[oldval];
            m.erase(oldval);m.insert({newval,ind});
        }
        for(auto it:m){
            nums[it.second]=it.first;
        }
        return nums;
    }
};
