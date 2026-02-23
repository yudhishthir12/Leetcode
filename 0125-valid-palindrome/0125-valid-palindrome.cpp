class Solution {
public:
    bool isPalindrome(string s) {
      
       for(int i=0;i<s.length();i++){
        if(!isalnum(s[i])){
            s.erase(i,1);
            i--;

        }
       }
       for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
       }
       int strt=0;
       int n=s.length()-1;
       while(strt<=n){
       if(s[strt]==s[n]){
        strt++;
        n--;
       }
       else{
        return false;
       }
       }
       return true;
       
       
       
    }
};