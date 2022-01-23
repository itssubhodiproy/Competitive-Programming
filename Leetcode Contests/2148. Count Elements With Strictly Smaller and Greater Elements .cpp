class Solution {
public:
    int countElements(vector<int>& nums) {
        int large=INT_MIN;
        int small=INT_MAX;
        for(int i=0;i<nums.size();i++){
            large=max(large,nums[i]);
            small=min(small,nums[i]);
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]==large || nums[i]==small){
            continue;
        }    
            count++;
        }
        return count;
    }
};
