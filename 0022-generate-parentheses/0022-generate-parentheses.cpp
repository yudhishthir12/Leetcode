class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int open=n;
        int close=n;
        string output="";
        vector<string> ans;
        solve(open,close,output,ans);
        return ans;
    }
    void solve(int open,int close,string output,vector<string> &ans){
        if(open==0 && close==0){
            ans.push_back(output);
            return;
        }
        string op1=output;
        string op2=output;
        if(open>0){
            op1.push_back('(');
            solve(open-1,close,op1,ans);
        }
        if(open!=close){
            op2.push_back(')');
            solve(open,close-1,op2,ans);
        }
        return;
    }
};