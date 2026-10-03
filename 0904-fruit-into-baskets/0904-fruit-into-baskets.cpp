class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0;
        map<int,int> freq;
        int distinct=0;int maxi=0;
        for(int right=0;right<fruits.size();right++){
            if(freq[fruits[right]]==0){
                freq[fruits[right]]++;
                distinct++;
            }
            else{
            freq[fruits[right]]++;
            }
            while(distinct>2){
                freq[fruits[left]]--;
                if(freq[fruits[left]]==0){
                    distinct--;
                }
                left++;
            }
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};