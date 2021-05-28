/*
Problem at https://leetcode.com/problems/running-sum-of-1d-array/

Time Complexity - O(n)

*/


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size1= nums.size();
        for(int i=1;i<size1;i++){
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
    }
};