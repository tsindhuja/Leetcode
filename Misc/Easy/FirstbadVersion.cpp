// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    //Time Complexity: O(log N)
    //Space Complexity: O(1)
    int firstBadVersion(int n) {
        int start = 0;
        int end = n;
        int first = 0;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(isBadVersion(mid)){
                end = mid - 1;
                first = mid;
            }
            else{
                start = mid + 1;
            }
        }
        return first;
    }
};