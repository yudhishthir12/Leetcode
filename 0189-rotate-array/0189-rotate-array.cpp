class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        int lefi=0;
        int righi=k-1;
        while(lefi<righi){
           swap(nums[lefi],nums[righi]);
           lefi++;
           righi--;
        }
        int left =k;
        int right=n-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
};