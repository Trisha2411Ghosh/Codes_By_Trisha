class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0, r=0;
        int n = s.size(), m = t.size();
        int cnt = 0, minLen = INT_MAX;
        int startInd = -1;
        map<char,int>mp;
        for(int i=0;i<m;i++) mp[t[i]]++;
        while(r<n){
            if(mp[s[r]]>0) cnt++;
            mp[s[r]]--;
            while(cnt==m){
                if(r-l+1<minLen){
                    minLen = (r-l+1);
                    startInd = l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return startInd == -1 ? "" : s.substr(startInd,minLen);

        // int n=s.size();
        // int m=t.size();
        // if(n<m) return "";
        // int minlen=INT_MAX;
        // int SIndex=-1;
        // for(int i=0;i<n;i++){      
        //     int hash[256]={0};
        //     int cnt=0;
        //     for(int j=0;j<m;j++){
        //         hash[t[j]]++;
        //     }
        //     for(int j=i;j<n;j++){
        //        if(hash[s[j]]>0){
        //         cnt++;
        //        }
        //        hash[s[j]]--;
        //        if(cnt==m){
        //         if(j-i+1<minlen){
        //             minlen=j-i+1;
        //             SIndex=i;
        //         }
        //         break;
        //        }
        //     }
            
        // }
        // return SIndex == -1 ? "" : s.substr(SIndex, minlen);
    }
};