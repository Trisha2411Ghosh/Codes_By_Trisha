class Solution {
public:
    bool isPalindrome(int x) {
       long rev=0;
        int temp=x;
        if(x<0){
            return false;
        }
        while(temp!=0){
            long rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
};