class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> res;
        for(int x : nums1){
            auto iter = find(nums2.begin(), nums2.end(), x);
            if(iter != nums2.end()){
                nums2[iter - nums2.begin()] = -1;
                res.push_back(x);
            }
                
        }
        return res;
    }
};