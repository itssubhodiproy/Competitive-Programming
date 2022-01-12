string convert(string s){

    //If length is less or equal to two
    if(s.length()<=2){
        string word="";
        for(int i=0;i<s.length();i++){

            int j=s[i];char st;
            if(j<=90){  
                st=j+32; word.push_back(st);
            }
            else{
                word.push_back(s[i]);
            }
        }
        return word;
    }
    //If length is greater than two

        string word="";
        for(int i=0;i<s.length();i++){

            // first letter is small
            if(i==0 && (int)s[i]>=97){
                word.push_back((char)((int)s[i]-32));
                continue;
            }
            // first letter is capital already
            if(i==0 && (int)s[i]<=90){
                word.push_back(s[i]);
                continue;
            }

            // if the remaing is capital
            if((int)s[i]<=90){  
                word.push_back((char)((int)s[i]+32));
                continue;
            }
            // if the remaining is small
            if((int)s[i]>=97){
                word.push_back(s[i]);continue;
            }
        }
        
        return word;
    
}



class Solution {
public:
    string capitalizeTitle(string title) {
        
        string words=""; int n=title.length();
        queue<string> ds;
        for(int i=0;i<=n;i++){
            if( (title[i]==' ') || (i==n) ){
                ds.push(words);words=""; continue;
            }
            words+=title[i];
        }
        string updated="";

        while (ds.size()!=1)
        {
            updated+=convert(ds.front());ds.pop();
            updated+=" ";
        }
        updated+=convert(ds.front());
        return updated;
        
}
};
