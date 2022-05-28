class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        bool freq[10001]{false};
        int n=nums.size(), l=0,r=0,ans=0,cur_sum=0;
        while(r<n){
            while(freq[nums[r]])
                cur_sum-=nums[l], freq[nums[l++]]=false;
            cur_sum+=nums[r], freq[nums[r++]]=true;
            ans=max(ans,cur_sum);
            
            
        }
        return ans;
        
         
    }
};