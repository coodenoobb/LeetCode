// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int l = 0;
        int h = n;
        int ans;
        
        
        int mid = l+(h-l)/2;
        
        while(l<=h){
            if(isBadVersion(mid)){
                ans = mid;
                h = mid-1;
            }
            else{
                l = mid+1;
            }
            mid = l+(h-l)/2;
        }
        
        return ans;
        
        
        
    }
};