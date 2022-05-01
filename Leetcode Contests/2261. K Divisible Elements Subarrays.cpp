struct hashFunction 
{
  size_t operator()(const vector<int> 
                    &myVector) const 
  {
    std::hash<int> hasher;
    size_t answer = 0;
      
    for (int i : myVector) 
    {
      answer ^= hasher(i) + 0x9e3779b9 + 
                (answer << 6) + (answer >> 2);
    }
    return answer;
  }
};

class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        unordered_set<vector<int>,hashFunction> s;;int n=nums.size();
        vector<int> v;int count=0;
        
        
        for(int i=0;i<n;i++){
            count=0;v.clear();
            for(int j=i;j<n;j++){
                if(nums[j]%p==0) count++;
                if(count>k) break;
                v.push_back(nums[j]);
                s.insert(v);
            }
        }
        return s.size();
    }
};
