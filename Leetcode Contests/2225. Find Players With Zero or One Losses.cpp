class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n=matches.size();
        
        unordered_set<int> n_loser,o_loser;
        for(int i=0;i<n;i++){
        n_loser.insert(matches[i][0]);
        n_loser.insert(matches[i][1]);
        o_loser.insert(matches[i][0]);
        o_loser.insert(matches[i][1]);
        }
        for(int i=0;i<n;i++){
            if(n_loser.count(matches[i][1])==1){
                n_loser.erase(matches[i][1]);
            }
            else{
                if(o_loser.count(matches[i][1])==1){
                    o_loser.erase(matches[i][1]);
                }
            }
        }
        for(auto it: n_loser){
            if(o_loser.count(it)==1){
                o_loser.erase(it);
            }
        }
        // generating ans
        vector<vector<int>> ans;
        vector<int> ans1,ans2;
        for(auto it: n_loser){
            ans1.push_back(it);
        }
        for(auto it: o_loser){
            ans2.push_back(it);
        }
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};
