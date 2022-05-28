class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        unordered_map<int, int> count;
        for(int i=0; i<nums.size(); i++){
            if(count.find(nums[i]) != count.end()){
                count.find(nums[i])->second++;
            }
            else{
                count.insert({nums[i], 1});
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(count.find(nums[i])->second==1)
                return count.find(nums[i])->first;
        }
        return 0;
    }
};