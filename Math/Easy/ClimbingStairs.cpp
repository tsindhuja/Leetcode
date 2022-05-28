class Solution {
public:
    int climbStairs(int n) {
        if(n<=3) return n;
        int first_step =1, second_step=2, curr_step;
        for(int i=3; i<=n; i++){
            curr_step = first_step+second_step;
            first_step = second_step;
            second_step = curr_step;
        }
        return curr_step;
        
    }
};