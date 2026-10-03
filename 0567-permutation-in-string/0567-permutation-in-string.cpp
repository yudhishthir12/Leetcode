class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1size=s1.size();
        int s2size=s2.size();
        int left=0;
        int freq1[26]={0};
        int freq2[26]={0};
        if(s1size>s2size){
            return false;
        }
        bool ans=true;
        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;

        }
        for(int i=0;i<26;i++){
             if(freq1[i]!=freq2[i]){
                ans=false;
                break;
             }
        }
        if(ans){
            return true;
        }

        for(int right=s1.size();right<s2.size();right++){
            freq2[s2[right]-'a']++;
            freq2[s2[left]-'a']--;
            left++;
            ans=true;

            for(int i=0;i<26;i++){
                if(freq1[i]!=freq2[i]){
                    ans=false;
                    break;
                }
            }
            if(ans){
                return true;
            }
        }
        return false;
        
        
    }
};