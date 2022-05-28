class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int majority = 0, majority_next =0, n;
        if(nums.size() % 2 == 0)
            n = nums.size()/2 - 1;
        else
            n = nums.size()/2;
        
        int mid = nums[n];
        if(mid == nums[0])
            return nums[0];
        else
            return mid;
        
    }
};