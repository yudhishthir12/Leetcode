class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int freq=0;
        int ans=0;
        int n=nums.size();
        int i=0;
        for(int i=0;i<n;i++){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                        count++;
                }
            }
            if(count>n/2){
                return nums[i];
            }
             
        }
        return -1;
    }
};