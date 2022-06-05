class Solution {
public:
    int partitionArray(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int mini=v[0],count=1;
        for(auto it:v){
            if(it-mini>k){
                mini=it;count++;
            }
        }
        return count;
    }
};
