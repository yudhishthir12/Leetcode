class Solution {
public:
    bool possible(vector<int>& bloomDay,int day,int m,int k){
        int flower=0;
        int bouquets=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                flower++;
                if(flower==k){
                    bouquets+=1;
                    flower=0;
                }

            }
            else{
                flower=0;     
            }

        }
        return bouquets>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long required= 1LL*m*k;
        if(required>bloomDay.size()){
            return -1;
        }
        int low=1;
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};