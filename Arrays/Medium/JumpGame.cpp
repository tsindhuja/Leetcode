class Solution {
public:
    bool canJump(vector<int>& a) {
        int i,n=a.size(),maxi=0;
        if(n==1) return 1;
        for(i=0;i<n;i++){
            if(maxi>=i) maxi=max(maxi, i+a[i]);
        }
        return maxi>=(n-1);
    }
    
};