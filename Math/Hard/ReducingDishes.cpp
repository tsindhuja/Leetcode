/* 
Problem at https://leetcode.com/problems/reducing-dishes/

*/
/*
Time Complexity - O(n^2)
*/
class Solution {
public:
    int maxSatisfaction(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
           int curr=0;
            for(int j=i;j<n;j++){
                curr+=(j-i+1)*arr[j];
                
            }
            ans = max(curr,ans);
        }
        return ans;
    }
};