class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int ps=0;
        int ans=0;
        for(int x:nums){
            ps+=x;
            int rem=((ps%k)+k)%k;
            if(mp.count(rem)){
                ans+=mp[rem];
            }
            mp[rem]++;
        }
        return ans;
    }
};