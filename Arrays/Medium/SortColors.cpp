class Solution {
public:
    void sortColors(vector<int>& nums) {
        if(nums.size() == 1) return;
        unordered_map<int, int> map_nums = {{0,0},{1,0},{2,0}};
        for(int i=0; i<nums.size(); i++){
            switch(nums[i]){
                case 0: map_nums[0]++;
                    break;
                case 1: map_nums[1]++;
                    break;
                case 2: map_nums[2]++;
                    break;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(map_nums[0] != 0) {nums[i] = 0; map_nums[0]--;}
            else if(map_nums[1] != 0) {nums[i] = 1; map_nums[1]--;}
            else if(map_nums[2] != 0) {nums[i] = 2; map_nums[2]--;}
        }
        
    }
};