class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        int sum=0;
        vector<vector<int>> ans;
        solve(candidates,output,ans,sum,target);
        return ans;
    }
    void solve(vector<int> candidates,vector<int> &output,vector<vector<int>>& ans,int sum,int target){
            if(sum==target ){
                ans.push_back(output);
                 return;
            }
            if(candidates.size()==0 &&  sum!=target){
                return;
            }
            if(sum>target){
                return;
            }
            vector<int> op1=output;
            vector<int> op2=output;
            int sum1=sum;
            int sum2=sum;
            op1.push_back(candidates[0]);
            sum1+=candidates[0];
            vector<int> remaining =candidates;
            remaining.erase(remaining.begin());
            solve(candidates,op1,ans,sum1,target);
            solve(remaining,op2,ans,sum2,target);
            return ;
        }
};