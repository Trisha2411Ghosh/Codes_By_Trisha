class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        return max(helper(red,blue),helper(blue,red));
    }
    private:
    int helper(int red,int blue){
        int h =0;
        int count=1;
        // bool useRed=true;//start with red
        
        while(true){
            if(count%2==1){
                if(red>=count){
                    red-=count;
                }else{
                    break;
                }
            }
            else{
                    if(blue>=count){
                        blue-=count;
                    }else{
                        break;
                }
            }
            h++;
            count++;
        }
        return h;
    }
};