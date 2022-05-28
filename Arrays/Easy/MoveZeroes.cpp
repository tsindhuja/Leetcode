class Solution {
public:
    //Time Complexity: O(n)
    //SPace complexity: O(1)
    void moveZeroes(vector<int>& nums) {
        int i=0, j=0;
        while(i<nums.size()){
            if(nums[i] !=0){
                if(i!=j){
                    nums[j] =nums[i];
                    nums[i]=0;
                }
                j++;
            }   
            i++;
            
        }
    }
};