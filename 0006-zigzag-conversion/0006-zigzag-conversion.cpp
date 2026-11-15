class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.length() ){
            return s;
        }

        vector<string> rows(numRows);
        int row=0;
        int flag=1;
        for(int i=0;i<s.length();i++){
            rows[row]+=s[i];
            
            if(row==0){
                flag=1;;
            }
            else if(row==numRows-1){
                flag=-1;
            }
            row+=flag;

        }
        string ans="";
        for(int i=0 ;i<numRows;i++){
            ans+=rows[i];
        }
        return ans;
    }
};