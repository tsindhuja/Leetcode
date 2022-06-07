class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        unordered_map<int, int> hashmap;
        for(int i=0; i<nums.size(); i++){
            if(hashmap.find(target - nums[i]) != hashmap.end()){
                res[1] = i;
                res[0] = hashmap.find(target - nums[i])->second;
                return res;
                
            }
            hashmap.insert({nums[i], i});
            
        }
        return res;
    }
};