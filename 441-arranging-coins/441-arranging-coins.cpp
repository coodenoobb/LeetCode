class Solution {
public:
    int arrangeCoins(int n) {
        
        int l = 0;
        int h = n;
        
        long long int mid = l+(h-l)/2;
        long long int k = mid*(mid+1)/2;
        
        while(l<=h){
            k = mid*(mid+1)/2;
            if(k==n){
                return mid;
            }
            else if (k<n){
                l = mid+1;
            }
            else{
                h = mid - 1;
            }
            
            mid = l+(h-l)/2;
            
            
        }
        return h;
    }
};