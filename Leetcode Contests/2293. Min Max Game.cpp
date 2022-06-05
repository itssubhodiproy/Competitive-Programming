class Solution {
public:
    int minMaxGame(vector<int>& v) {
        vector<int>dummy;int n=v.size(),i=0;bool check=true;
        while(v.size()!=1){
            i=0;
            while(i!=v.size()){
                if(check){
                    dummy.push_back(min(v[i],v[i+1]));
                    check=false;
                }
                else{
                    dummy.push_back(max(v[i],v[i+1]));
                    check=true;
                }
                i+=2;
            }
            v=dummy;
            dummy.clear();
        }
        return v[0];
    }
};
