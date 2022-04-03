bool f(vector<int> candies, long long k,long long int mid){
    
    long long int maxi=*max_element(candies.begin(),candies.end());
    if((maxi/mid)>=k) 
        return true;
    //dividing all the elements with mini
    for(long long int i=0;i<candies.size();i++){
        candies[i]/=mid;
    }
    long long int sum=0;
    for(auto it: candies){
        sum+=it;
    }
    if(sum>=k) 
        return true; 
    
    return false;   
}


class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {   
        long long int l=1;
        long long int r=1e7;
        long long int ans=0;
        while(l<=r){
            long long int mid=l+(r-l)/2;
            if(f(candies,k,mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};
