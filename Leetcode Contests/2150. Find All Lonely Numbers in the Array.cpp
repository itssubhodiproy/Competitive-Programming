// My solution

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        // check1
        set<int> s;
        vector<int>ans;
        for(auto it: nums){
            s.insert(it);
        }
        
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i]+1)==1 || s.count(nums[i]-1)==1){
                continue;
            }
            ans.push_back(nums[i]);
        }
        // ans is storing alll elements which adjacent is not present in the arrray
        
        // check2 ---->>>> check for repeating elment
        unordered_map <int,int> m;
        for(auto it: ans){
            m[it]++;
        }
        ans.clear();
        for(auto it: m){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        return ans;
        
        
    }
};



//best solution on internet.com

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
     vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>pk;
        for(int i:nums) pk[i]+=1;
        for(int i:nums){
            if((pk[i]==1) && (pk[i-1]==0) && (pk[i+1]==0)) ans.push_back(i);
        }
        return ans;
    }
};
