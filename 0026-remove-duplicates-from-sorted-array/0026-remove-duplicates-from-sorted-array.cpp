class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=1;
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                swap(nums[j],nums[i+1]);
                i++;
                j++;
            }
        }
        return i+1;
    }
};