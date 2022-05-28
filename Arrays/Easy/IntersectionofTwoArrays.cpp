
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> s2;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        set_intersection(nums1.begin(), nums1.end(),
                        nums2.begin(), nums2.end(),
                       inserter(s2, s2.begin()));
        vector<int> res(s2.begin(), s2.end());
        return res;
    }
};