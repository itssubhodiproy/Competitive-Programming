class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;
        while(target!=1){
            if(target%2==0){
                if(maxDoubles){
                    target /= 2;
                    maxDoubles--;
                    count++;
                } 
                else{
                    int rem = target-1;
                    target = target-rem;
                    count+=rem;
                }
            } 
            else{
                target--;
                count++;
            }
    }
        return count;
    }
};
