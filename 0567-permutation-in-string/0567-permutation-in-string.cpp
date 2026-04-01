class Solution {
public:
   bool isfreqsame(int freq1[],int windfreq[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=windfreq[i]){
          return false;
        }
    }
    return true;
   }

    bool checkInclusion(string s1, string s2) {
        int freq1[26]={0};
        for(int i=0;i<s1.length();i++){
            freq1[s1[i]-'a']++;
        }
        int windsize=s1.length();
        for(int i=0;i<s2.length();i++){
            int windidx=0;
            int idx=i;
            int windfreq[26]={0};
            while(windidx<windsize && idx<s2.length()){
               windfreq[s2[idx]-'a']++;
               windidx++;
               idx++;
            }
            if(isfreqsame(freq1,windfreq)){
                return true;
            }
        }
        return false;
    }
};