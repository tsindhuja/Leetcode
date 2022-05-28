class Solution {
public:
    //Time Complexity: O(n)
    //Space complexity: O(1)
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0, high=numbers.size()-1;
        vector<int> two(2);
        while(low<high){
            int sum = numbers[low] + numbers[high];
            if(sum==target) return two = {++low,++high};
            else if(sum<target) low++;
            else high--;
        }
      return two;
     
           
    }
};