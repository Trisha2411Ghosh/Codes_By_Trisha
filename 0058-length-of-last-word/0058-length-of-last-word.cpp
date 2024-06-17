class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int length=0;
        bool count=false;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                count=true;
                length++;
            }
            else if(count){
                break;
            }
        }
        return length;
    }
};