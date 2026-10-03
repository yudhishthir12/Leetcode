class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int freq=0;
        int maxi=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==1){
                freq++;
            }
            while(right-left+1-freq>k){
                if(nums[left]==1){
                    freq--;
                }
                left++;
            }
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};