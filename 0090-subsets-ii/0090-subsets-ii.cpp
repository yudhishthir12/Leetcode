class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        solve(nums,output,ans);
        return ans;
    }
    void solve(vector<int> nums,vector<int>& output,vector<vector<int>> &ans){
        if(nums.size()==0){
            ans.push_back(output);
            return;
        }
        vector<int> op1=output;
        vector<int> op2=output;
        op1.push_back(nums[0]);
        int x=nums[0];
        nums.erase(nums.begin());
        vector<int> remaining=nums;
        while(!remaining.empty() && remaining[0]==x){
            remaining.erase(remaining.begin());
        }

        solve(nums,op1,ans);
        solve(remaining,op2,ans);
        return;
    }
};