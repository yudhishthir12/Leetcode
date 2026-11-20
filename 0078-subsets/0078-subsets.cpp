class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> op;
        vector<vector<int>> ans;
        solve(nums,op,ans);
        return ans;
    }
    void solve(vector<int> nums,vector<int> op,vector<vector<int>> &ans){
        if(nums.size()==0){
            ans.push_back(op);
            return;
        }
        vector<int> op1=op;
        vector<int> op2=op;
        op1.push_back(nums[0]);
        nums.erase(nums.begin());
        solve(nums,op1,ans);
        solve(nums,op2,ans);
        return;
    }
};