class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> num={1,2,3,4,5,6,7,8,9};
        int sum=0;
        vector<int> output;
        vector<vector<int>> ans;
        solve(num,output,sum,ans,k,n);
        return ans;
    }
    void solve(vector<int> num,vector<int>& output,int sum,vector<vector<int>>& ans,int k ,int n){
        if(output.size()==k && sum==n){
            ans.push_back(output);
            return;
        }
        if(num.empty()){
            return;
        }
        vector<int> op1=output;
        vector<int> op2=output;
        op1.push_back(num[0]);
        int sum1=sum;
        int sum2=sum;
        sum1+=num[0];
        num.erase(num.begin());

        solve(num,op1,sum1,ans,k,n);
        solve(num,op2,sum2,ans,k,n);
        return;

    }
};