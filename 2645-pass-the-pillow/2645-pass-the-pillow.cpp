class Solution {
public:
    int passThePillow(int n, int time) {
        int cycle_length = n - 1;
        int full_cycles = time / cycle_length;
        int remainder_time = time % cycle_length;
        
        if (full_cycles % 2 == 0) {
            // Forward direction
            return remainder_time + 1;
        } else {
            // Backward direction
            return n - remainder_time;
        }


        // int pos = (time%n)+1;
        // return pos;


        // if(n>time){
        //     return time+1;
        // }
        // int ans;
        // int extratime=(time-n);
        // // return n-extratime-1;
        // for(int i=n;i<=extratime;i--){
        //     if(extratime<n){
        //         ans=i-extratime-1;
        //     }else{
                
        //     }
        // }
    }
};