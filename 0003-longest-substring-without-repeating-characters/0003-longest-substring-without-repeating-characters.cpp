class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int maxi=0;
        set<char> st;
        for(int r=l;r<s.size();r++){
            while(st.count(s[r])){
                st.erase(s[l]);
                l++;
             }
             if(!st.count(s[r])){
                st.insert(s[r]);
             }
             maxi=max(maxi,r-l+1);
        }
        return maxi;   
    }
};