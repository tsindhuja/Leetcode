
/*
Problem at https://leetcode.com/problems/sum-of-all-subset-xor-totals/
*/

/*
Time Complexity : O(n)
*/

int helper(vector<int> &arr ,int set, int index)
{
if(index== arr.size())
{
return(0);
}

    return(helper(arr,set,index+1)+ (set^arr[index])+ helper(arr,set^arr[index],index+1) );
}
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return helper(nums,0,0);
    }
};