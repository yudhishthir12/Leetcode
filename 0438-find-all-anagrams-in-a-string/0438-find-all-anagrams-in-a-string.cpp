class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int psize=p.size();
        int ssize=s.size();
        int left=0;
        int freqp[26]={0};
        int freqs[26]={0};
        vector<int> num;
        if(psize>ssize){
            return num;
        }
        bool ans=true;
        for(int i=0;i<psize;i++){
            freqp[p[i]-'a']++;
            freqs[s[i]-'a']++;

        }
        for(int i=0;i<26;i++){
             if(freqp[i]!=freqs[i]){
                ans=false;
                break;
             }
        }
        if(ans){
            num.push_back(left);
        }

        for(int right=p.size();right<s.size();right++){
            freqs[s[right]-'a']++;
            freqs[s[left]-'a']--;
            left++;
            ans=true;

            for(int i=0;i<26;i++){
                if(freqp[i]!=freqs[i]){
                    ans=false;
                    break;
                }
            }
            if(ans){
                num.push_back(left);
            }
        }
        return num;
        
    }
};