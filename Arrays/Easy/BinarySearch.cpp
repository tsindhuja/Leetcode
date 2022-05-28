class Solution {
public:
    int binarySearch(vector<int>& nums, int target, int low, int high){
        int mid = low + (high - low)/2;
        if(low<=high){
            if(target == nums[mid]) return mid;
            else if(target > nums[mid]) return binarySearch(nums, target, mid+1, high);
            else return binarySearch(nums, target, low, mid-1);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size()-1);
        
    }
};