class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int min, int max){
        int mid = min + ((max-min)/2);
        if(max >=min){
            if(target==nums[mid]) return mid;
        else if(target>nums[mid]) return binarySearch(nums, target, mid+1, max);
        else if(target<nums[mid]) return binarySearch(nums, target, min, mid-1);
        }
        
        return mid;
        
        
    }
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size()-1);
    }
};