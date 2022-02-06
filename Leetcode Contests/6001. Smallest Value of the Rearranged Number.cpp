class Solution {
public:
    long long smallestNumber(long long num) {
        string s=to_string(num);
        string newstring="";
        //check whether it is positive number or not
        if(num>0){
            // sort the string with leeading zeros
            sort(s.begin(),s.end());
            // taking zero count and the first character
            long long zerocount=0;
            char first;
            if(s[0]=='0'){
                for(auto it: s){
                    if(it=='0'){
                        zerocount++;
                    }
                    else{
                        first=it;
                        break;
                    }
                }
                //making new string
                newstring.push_back(first);
                for(int i=1;i<=zerocount;i++)
                    newstring.push_back('0');
                
                for(int i=0;i<s.length();i++){
                    if(i<=zerocount){
                        continue;
                    }
                    else{
                        newstring.push_back(s[i]);
                    }
                }
                
                num=stoll(newstring);
                return num;
            }
            
                num=stoll(s);
                return num;
            
            }
    
        else{
            sort(s.begin(),s.end(),greater<int>());
            num=stoll(s);
            num*=-1;
        }
        return num;
        
    }
};
