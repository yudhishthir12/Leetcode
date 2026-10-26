class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp.reserve(nums.size());
        mp[0]=-1;
        int sum=0;
        int maxlength =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum+=-1;
            }
            else{
                sum+=1;
            }
            if(mp.count(sum)){
                maxlength=max(maxlength,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }

        }
        return maxlength ;
    }
};