class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> sumfreq;
        for(int a:nums1){
            for(int b:nums2){
                sumfreq[a+b]++;
            }
        }
        int ans=0;
        for(int c:nums3){
            for(int d:nums4){
                int target=-(c+d);
                if(sumfreq.count(target)){
                    ans+=sumfreq[target];
                    
                };
            }
        }
        return ans;
    }
};