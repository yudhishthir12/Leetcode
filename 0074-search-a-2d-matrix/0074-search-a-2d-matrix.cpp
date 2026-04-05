class Solution {
public:
   bool found(int midrow,vector<vector<int>>& matrix,int  target){
      int m=matrix[0].size();
      int st=0;
      int end=m-1;
      while(st<=end){
        int mid=st +(end-st)/2;
        if(matrix[midrow][mid]>target){
             end=mid-1;

        }
        else if(matrix[midrow][mid]<target){
            st=mid+1;
        }
        else{
            return true;
        }
      }
      return false;
   }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int strow=0;
        int endrow=m-1;
        while(strow<=endrow){
            int midrow=strow +(endrow-strow)/2 ;
            if(target>=matrix[midrow][0]  && target<=matrix[midrow][n-1]){
               return found(midrow,matrix,target);
            }
            else if(target>matrix[midrow][n-1]){
                strow=midrow+1;


            }
            else{
                endrow=midrow-1;
            }
        }
        return false;
    }
};