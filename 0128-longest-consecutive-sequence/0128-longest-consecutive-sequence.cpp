class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        unordered_set<int> mp(nums.begin(),nums.end());
        int maxstreak=0;
        for(int x:mp){
            if(!mp.count(x-1)){
               int maxlength=1;
               int currnum=x;
            
            while(mp.count(currnum+1)){
                maxlength+=1;
                currnum+=1;
            }
            maxstreak=max(maxlength,maxstreak);
            }
        }
        return maxstreak;
    }
};