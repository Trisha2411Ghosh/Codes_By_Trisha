class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0){
            return true;
        }
        for (long a = 0; a * a <= c; ++a) {
            long bSquare = c - a * a;
            long b = sqrt(bSquare);
            if (b * b == bSquare) {
                return true;
            }
        }
        return false;
    }
};