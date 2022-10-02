class Solution {
public:
    int binarySearch(int n){
        
        int l = 0;
        int h = n;
        
        long long int mid = l+(h-l)/2;
        long long int ans = -1;
        
        while(l<=h){
            
            long long int sqr = mid * mid;
            
            if(sqr==n){
                
                return mid;
            }
            
            else if(sqr<n){
                ans = mid;
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
            mid = l+(h-l)/2;
        }
        return ans;
    }
    
    int mySqrt(int x) {
        
        return binarySearch(x);
        
    }
};