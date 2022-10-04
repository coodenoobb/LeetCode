class Solution {
public:
    bool isPerfectSquare(int n) {
        
        int l = 0;
        int h = n;
        long long int ans = -1;
        bool val = false ;
        long long int mid = l+(h-l)/2;
        
        while(l<=h){
            long long int sqr = mid*mid;
            
            if(sqr==n){
                
                ans = mid;
                val = true;
                return val;
            }
            else if (sqr<n){
                l = mid+1;
            }
            else{
                h = mid - 1; 
            }
            mid = l+(h-l)/2;
        }
        return val;
    }
};