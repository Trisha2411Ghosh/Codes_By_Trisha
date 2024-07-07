class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size();
        // if(n<2) return n;
        int cnt=0;
        
        for(int i=0;i<n;i++){
            int prev = colors[(i-1+n)%n];
            int curr=colors[i];
            int next = colors[(i+1)%n];
            
            if(prev!=curr && curr!=next){
                cnt++;
            }
        }
        return cnt;
    }
};