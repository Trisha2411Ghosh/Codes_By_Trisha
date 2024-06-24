class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256,-1);
        int l=0,r=0;
        int n=s.size();
        int maxlen=0;
        while(r<n){
            if(mpp[s[r]]!=-1){
                l=max(mpp[s[r]]+1 , l);
            }
            mpp[s[r]]=r;
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};