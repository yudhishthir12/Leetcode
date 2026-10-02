class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int sum=0;
       for(int i=0;i<k;i++){
        sum+=nums[i];
       }
       int left=0;
       int maxi=sum;
       for(int right=k;right<nums.size();right++){
        sum+=nums[right];
        sum-=nums[left];
        maxi=max(sum,maxi);
        left++;
       }
       return (double)maxi/k;
       
    }
};