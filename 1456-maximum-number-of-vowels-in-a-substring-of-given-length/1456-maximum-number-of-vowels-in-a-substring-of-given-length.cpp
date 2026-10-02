class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'  || s[i]=='u'){
                count++;
            }
        }
        int  maxcount =count;
        int left=0;
        for(int right=k;right<s.size();right++){
            if(s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o'  || s[left]=='u'){
                count--;
            }
            if(s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o'  || s[right]=='u'){

                count++;
            }
            maxcount=max(maxcount,count);
            left++;
        }
        return maxcount;
    }
};