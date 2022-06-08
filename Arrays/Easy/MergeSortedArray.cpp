class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        int i=0, j=0;
        while(j<n && i<m){
            
            if(nums1[i]<nums2[j]) i++;
            else{
                
                nums1.insert(nums1.begin()+i, nums2[j] );
                j++;
                i++;
                nums1.erase(nums1.end()-1);
                m++;
            }
        }
        if(nums1[i] == 0){
            while(j<n){
                nums1[i] = nums2[j];
                i++;
                j++;
            }
        }
    }
};