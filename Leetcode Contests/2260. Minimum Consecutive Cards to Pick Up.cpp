class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> m;
        int mini=INT_MAX;
        for(int i=0;i<cards.size();i++){
            if(m.count(cards[i])==0)
                m[cards[i]]=i;
            else{
                int dis=i-m[cards[i]]+1;
                m[cards[i]]=i;
                mini=min(mini,dis);
            }
        }
        if(mini==INT_MAX)
            return -1;
        return mini;
        
    }
};
