class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> odd, even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
         
            
        }
        for(int i=0, e=0, od=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=even[e];
                e++;
            }
            else{
                nums[i]=odd[od];
                od++;
            }
        }
        return nums;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]%2==0 && i%2==0)
                continue;
            else if((nums[i]%2==0 && i%2!=0) || (nums[i]%2!=0 && i%2==0)){
                int temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
            }
            
                
            
        }
        return nums;
    }
};